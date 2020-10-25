/*
 * roboRIO NI FPGA Interface C API Wrapper source file.
 *
 * Copyright (c) 2013,
 * National Instruments Corporation.
 * All rights reserved.
 */

#include <stdio.h>
#include <time.h>
#include "roboRIO.h"


/**
 * Global roboRIO NiFpga Session.
 * A valid session handle is created by calling the RoboRio_Open() function.
 * This session should be used when calling any of the NiFpga functions after
 * the RoboRio_Open() function has been called.
 */
NiFpga_Session roborio_session;


/*
 * Define the location of the bit file. The bit file must be located in
 * this folder.
 */
#define RoboRio_DefaultFolder "/var/local/natinst/bitfiles/"
#define RoboRio_BitfilePath RoboRio_DefaultFolder RoboRio_Bitfile


/**
 * Print the value of status if there is an error or warning.
 *
 * Messages are printed to stdout. Error codes are prefixed with "ERROR:" and
 * warning codes are prefixed with "WARNING:". If the status is equal to
 * NiFpga_Status_Success then nothing is printed.
 *
 * @param[in]  status  The NiFpga_Status for which to print the value
 */
void RoboRio_PrintStatus(NiFpga_Status status)
{
    if (status < NiFpga_Status_Success)
    {
        printf("ERROR: %d\n", status);
    }
    else if (status > NiFpga_Status_Success)
    {
        printf("WARNING: %d\n", status);
    }
}


/**
 * Opens a session to the roboRIO FPGA Personality.
 *
 * This function ensures that the NiFpga library is loaded and that the correct
 * roboRIO personality bitfile is programmed to the FPGA, started, and is
 * running. The roboRIO personality bitfile (.lvbitx file) for your target
 * must be in the same directory as where the executable is run otherwise the
 * function will fail.
 *
 * @warning  This function is not thread-safe.
 *           It should be called before all other function calls and only once
 *           per application.
 *
 * @return  NiFpga_Status which indicates if the operation was successful.
 */
NiFpga_Status RoboRio_Open()
{
    const uint32_t timeoutDelay = 5; /* 5 seconds */
    NiFpga_Status status;
    NiFpga_Bool sysReady;
    time_t currentTime;
    time_t finalTime;

    /*
     * Initialize the NiFpga Library.
     */
    status = NiFpga_Initialize();
    if (RoboRio_IsNotSuccess(status))
    {
        RoboRio_PrintStatus(status);
        printf("Could not load NiFpga library!\n");
        return status;
    }

    /*
     * Open the appropriate FPGA bitfile.
     */
    status = NiFpga_Open(RoboRio_BitfilePath,
                         RoboRio_Signature, "RIO0", NiFpga_OpenAttribute_NoRun,
                         &roborio_session);
    if (RoboRio_IsNotSuccess(status))
    {
        RoboRio_PrintStatus(status);
        printf("Could not Open FPGA!\n");
        if (status == NiFpga_Status_BitfileReadError)
        {
            printf("Ensure the bitfile %s exists\n", RoboRio_BitfilePath);
        }
        return status;
    }

    /*
     * Ensure that the FPGA code is reset and in a known state.
     */
    status = NiFpga_Reset(roborio_session);
    if (RoboRio_IsNotSuccess(status))
    {
        RoboRio_PrintStatus(status);
        printf("Could not Reset FPGA!\n");
        return status;
    }

    /*
     * Start the FPGA code.
     */
    status = NiFpga_Run(roborio_session, 0);
    if (RoboRio_IsNotSuccess(status))
    {
        RoboRio_PrintStatus(status);
        printf("Could not Run FPGA!\n");
        return status;
    }

    /*
     * Wait for the FPGA to signal ready
     */
    time(&currentTime);
    finalTime = currentTime + timeoutDelay;
    sysReady = NiFpga_False;
    while (currentTime < finalTime && !RoboRio_IsNotSuccess(status) && !sysReady)
    {
        time(&currentTime);
        NiFpga_MergeStatus(&status,
                    NiFpga_ReadBool(roborio_session, SYSRDY, &sysReady));
    }
    if (RoboRio_IsNotSuccess(status))
    {
        RoboRio_PrintStatus(status);
        printf("Could not read the system ready register!\n");
        return status;
    }
    if (!sysReady)
    {
        printf("Problem waiting for system ready!\n");
        printf("Timed out\n");
        return NiFpga_Status_InternalError;
    }

    return NiFpga_Status_Success;
}


/**
 * Closes the session to the roboRIO FPGA Personality.
 *
 * This function resets the FPGA (unless there is another open session) and
 * unloads the NiFpga library.
 *
 * @warning  This function is not thread-safe.
 *           It should be called after all other function calls and only once
 *           per application.
 */
NiFpga_Status RoboRio_Close()
{
    NiFpga_Status status;

    /**
     * Close and Reset the FPGA
     */
    status = NiFpga_Close(roborio_session, 0);
    if (RoboRio_IsNotSuccess(status))
    {
        RoboRio_PrintStatus(status);
        printf("Could not Close FPGA!\n");
        return status;
    }

    /**
     * Unload the NiFpga library
     */
    status = NiFpga_Finalize();
    if (RoboRio_IsNotSuccess(status))
    {
        RoboRio_PrintStatus(status);
        printf("Could not unload NiFpga library!\n");
        return status;
    }

    return status;
}

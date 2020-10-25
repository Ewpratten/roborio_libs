/**
 * roboRIO NI FPGA Interface C API Wrapper header file.
 *
 * Copyright (c) 2015,
 * National Instruments Corporation.
 * All rights reserved.
 */

#ifndef RoboRio_h_
#define RoboRio_h_

#if defined(RoboRio)

#include "RoboRio_Typedefs.h"

#else
#   error "Target Not Defined"
#endif

#if NiFpga_Cpp
extern "C" {
#endif


/**
 * Simple error handling for the cases where the function returns on error.
 */
#define RoboRio_ReturnIfNotSuccess(status, message)\
if (RoboRio_IsNotSuccess((status))){\
    RoboRio_PrintStatus((status));\
    printf((message));\
    return;\
}


/**
 * Simple error handling for the cases where the function returns on error.
 */
#define RoboRio_ReturnValueIfNotSuccess(status, value, message)\
if (RoboRio_IsNotSuccess((status))){\
    RoboRio_PrintStatus((status));\
    printf((message));\
    return (value);\
}


/**
 * Simple error handling for the cases where the function returns on error.
 */
#define RoboRio_ReturnStatusIfNotSuccess(status, message)\
if (RoboRio_IsNotSuccess((status))){\
    RoboRio_PrintStatus((status));\
    printf((message));\
    return (status);\
}


/**
 * Tests whether a status is not equal to NiFpga_Status_Success.
 *
 * Both errors and warnings will return NiFpga_True. If you only care about
 * checking errors and not warnings then use NiFpga_IsNotError.
 *
 * @param[in]  status  The NiFpga_Status to check for an error
 * @return  NiFpga_Bool which indicates if the status is an error or warning
 * @see NiFpga_IsNotError
 */
static NiFpga_Inline NiFpga_Bool RoboRio_IsNotSuccess(NiFpga_Status status)
{
    return (status != NiFpga_Status_Success);
}


/**
 * Print the value of status if there is an error or warning.
 */
void RoboRio_PrintStatus(NiFpga_Status status);


/**
 * Opens a session to the roboRIO FPGA Personality.
 */
NiFpga_Status RoboRio_Open();


/**
 * Closes the session to the roboRIO FPGA Personality.
 */
NiFpga_Status RoboRio_Close();

#if NiFpga_Cpp
}
#endif

#endif /* RoboRio_h_ */

/*******************************************************************************
  System Definitions

  File Name:
    definitions.h

  Summary:
    project system definitions.

  Description:
    This file contains the system-wide prototypes and definitions for a project.

 *******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *******************************************************************************/
//DOM-IGNORE-END

#ifndef WINC_DEFINITIONS_H
#define WINC_DEFINITIONS_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include "driver/wifi/wincs02/include/wdrv_winc_api.h"
#include "system/system.h"
#include "osal/osal.h"
#include "app_wincs02.h"


// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END

/* Device Information */
//#define DEVICE_NAME			 "ATSAME54P20A"
//#define DEVICE_ARCH			 "CORTEX-M4"
//#define DEVICE_FAMILY		 "SAME"
//#define DEVICE_SERIES		 "SAME54"

/* CPU clock frequency */
//#define CPU_CLOCK_FREQUENCY 120000000

// *****************************************************************************
// *****************************************************************************
// Section: System Functions
// *****************************************************************************
// *****************************************************************************
// *****************************************************************************
/* Invalid System Time handle value to a software timer

  Summary:
    Invalid handle value to a software timer instance.

  Description:
    Defines the invalid handle value to a timer instance.

  Remarks:
    Do not rely on the actual value as it may change in different versions
    or implementations of the SYS Time service.
*/

#define SYS_TIME_HANDLE_INVALID   ((SYS_TIME_HANDLE) (-1))

/* System Time Handle

  Summary:
    Handle to a software timer instance.

  Description:
    This data type is a handle to a software timer instance.  It can be
    used to access and control a software timer.

  Remarks:
    Do not rely on the underlying type as it may change in different versions
    or implementations of the SYS Time service.
*/
typedef uintptr_t SYS_TIME_HANDLE;

/* Errors that have the potential to cause a system crash. */
#define SYS_ERROR_FATAL 0

/* Errors that have the potential to cause incorrect behavior. */
#define SYS_ERROR_ERROR 1

/* Warnings about potentially unexpected behavior or side effects. */
#define SYS_ERROR_WARNING 2

/* Information helpful to understanding potential errors and warnings. */
#define SYS_ERROR_INFO 3

/* Verbose information helpful during debugging and testing. */
#define SYS_ERROR_DEBUG 4

typedef uint32_t SYS_ERROR_LEVEL;

#define SYS_CONSOLE_PRINT(fmt, ...)
#ifndef SYS_DEBUG_PRINT
    #define SYS_DEBUG_PRINT(level, fmt, ...)
#endif
// *****************************************************************************
// *****************************************************************************
// Section: Type Definitions
// *****************************************************************************
// *****************************************************************************

extern SYS_MODULE_OBJ  drvWifiWinc;
// *****************************************************************************
// *****************************************************************************
// Section: extern declarations
// *****************************************************************************
// *****************************************************************************

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif /* WINC_DEFINITIONS_H */
/*******************************************************************************
 End of File
*/


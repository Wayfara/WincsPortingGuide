/*******************************************************************************
  Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This file contains the "main" function for a project.

  Description:
    This file contains the "main" function for a project.  The
    "main" function calls the "SYS_Initialize" function to initialize the state
    machines of all modules in the system
 *******************************************************************************/

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stddef.h>                     // Defines NULL
#include <stdbool.h>                    // Defines true
#include <stdlib.h>                     // Defines EXIT_FAILURE
#include "definitions.h"                // SYS function prototypes

#include "winc_definitions.h"
#include "app_wincs02.h"

/* Structure to hold the object handles for the modules in the system. */
static const WDRV_WINC_SPI_CFG wdrvWincSpiInitData =
{
    .txDMAChannel       = 0,
    //.rxDMAChannel       = SYS_DMA_CHANNEL_1,
    //.txAddress          = (void *)&(SERCOM4_REGS->SPIM.SERCOM_DATA),
    //.rxAddress          = (void *)&(SERCOM4_REGS->SPIM.SERCOM_DATA),
};
static const WDRV_WINC_SYS_INIT wdrvWincInitData = {
    .pSPICfg    = &wdrvWincSpiInitData,
    .intSrc     = 0
};
SYS_MODULE_OBJ  drvWifiWinc;
// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************

int main ( void )
{
    /* Initialize all modules */
    SYS_Initialize ( NULL );

    /* Initialize the WINC Driver */
    drvWifiWinc = WDRV_WINC_Initialize(0, (SYS_MODULE_INIT*)&wdrvWincInitData);
    APP_WINCS02_Initialize();
    while ( true )
    {
        /* Maintain Device Drivers */
         WDRV_WINC_Tasks(drvWifiWinc);

        /* Maintain the application's state machine. */
            /* Call Application task APP_WINCS02. */
        APP_WINCS02_Tasks();

        /* Maintain Middleware & Other Libraries */
    }

    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}


/*******************************************************************************
 End of File
*/


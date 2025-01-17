/*******************************************************************************
  System Configuration Header

  File Name:
    configuration.h

  Summary:
    Build-time configuration header for the system defined by this project.

  Description:
    An MPLAB Project may have multiple configurations.  This file defines the
    build-time options for a single configuration.

  Remarks:
    This configuration header must not define any prototypes or data
    definitions (or include any files that do).  It only provides macro
    definitions for build-time configuration options

*******************************************************************************/

// DOM-IGNORE-BEGIN
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
// DOM-IGNORE-END

#ifndef WINC_CONFIGURATION_H
#define WINC_CONFIGURATION_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
/*  This section Includes other configuration headers necessary to completely
    define this configuration.
*/


// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: System Configuration
// *****************************************************************************
// *****************************************************************************



// *****************************************************************************
// *****************************************************************************
// Section: System Service Configuration
// *****************************************************************************
// *****************************************************************************
/* WINCS02  NET System Service Configuration Options */


#define SYS_WINCS_NET_BIND_TYPE0				SYS_WINCS_BIND_REMOTE 
#define SYS_WINCS_NET_SOCK_TYPE0				SYS_WINCS_SOCK_TCP 
#define SYS_WINCS_NET_SOCK_TYPE_IPv4_0           4
#define SYS_WINCS_NET_SOCK_TYPE_IPv6_LOCAL0      0
#define SYS_WINCS_NET_SOCK_TYPE_IPv6_GLOBAL0     0
#define SYS_WINCS_NET_SOCK_SERVER_ADDR0         "192.168.0.109"
#define SYS_WINCS_NET_SOCK_PORT0				6666
#define SYS_WINCS_TLS_ENABLE0					0



#define SYS_WINCS_NET_SockCallbackHandler  	     APP_SOCKET_Callback

#define SYS_DEBUG_ENABLE
#define SYS_DEBUG_GLOBAL_ERROR_LEVEL       SYS_ERROR_DEBUG
#define SYS_DEBUG_BUFFER_DMA_READY
#define SYS_DEBUG_USE_CONSOLE


/* TIME System Service Configuration Options */
#define SYS_TIME_INDEX_0                            (0)
#define SYS_TIME_MAX_TIMERS                         (5)
#define SYS_TIME_HW_COUNTER_WIDTH                   (24)
#define SYS_TIME_TICK_FREQ_IN_HZ                    (1000)

#define SYS_CONSOLE_DEVICE_MAX_INSTANCES   			(1U)
#define SYS_CONSOLE_UART_MAX_INSTANCES 	   			(1U)
#define SYS_CONSOLE_USB_CDC_MAX_INSTANCES 	   		(0U)
#define SYS_CONSOLE_PRINT_BUFFER_SIZE        		(200U)


#define SYS_CONSOLE_INDEX_0                       0






// *****************************************************************************
// *****************************************************************************
// Section: Driver Configuration
// *****************************************************************************
// *****************************************************************************
/*** WiFi WINC Driver Configuration ***/
#define WDRV_WINC_EIC_SOURCE
#define WDRV_WINC_DEVICE_USE_SYS_DEBUG
#define WDRV_WINC_DEV_RX_BUFF_SZ            2048
#define WDRV_WINC_DEV_SOCK_SLAB_NUM         30
#define WDRV_WINC_DEV_SOCK_SLAB_SZ          1472
#define WINC_SOCK_NUM_SOCKETS               10
#define WINC_SOCK_BUF_RX_SZ                 7360
#define WINC_SOCK_BUF_TX_SZ                 7360



// *****************************************************************************
// *****************************************************************************
// Section: Middleware & Other Library Configuration
// *****************************************************************************
// *****************************************************************************
/* WINCS02  WIFI System Service Configuration Options */

#define SYS_WINCS_WIFI_DEVMODE        		SYS_WINCS_WIFI_MODE_STA

#define SYS_WINCS_WIFI_STA_SSID				"apps_ap1"
#define SYS_WINCS_WIFI_STA_PWD        		"12345678"
#define SYS_WINCS_STA_SECURITY				SYS_WINCS_WPA2 
#define SYS_WINCS_WIFI_STA_AUTOCONNECT   	true


#define SYS_WINCS_COUNTRYCODE                GEN


#define SYS_WINCS_WIFI_AP_IP_ADDR            "192.168.0.0"
#define SYS_WINCS_WIFI_AP_IP_POOL_START      "192.168.0.1"
#define SYS_WINCS_WIFI_CallbackHandler	     APP_WIFI_Callback


// *****************************************************************************
// *****************************************************************************
// Section: Application Configuration
// *****************************************************************************
// *****************************************************************************
// Todo 20241225: Below function needs to be implemented
#warning("The app needs define the WDRV_WINC_INT_Get() function")
#define WDRV_WINC_INT_Get() (0)

#warning("The app needs define the WDRV_WINC_RESETN_Clear() function")
#define WDRV_WINC_RESETN_Clear()

#warning("The app needs define the WDRV_WINC_RESETN_Clear() function")
#define WDRV_WINC_RESETN_Set();

#warning("The app needs define the WDRV_WINC_RESETN_Get() function")
#define WDRV_WINC_RESETN_Get() (0)

#warning("The app needs define the SYS_TIME_DelayMS( uint32_t ms, SYS_TIME_HANDLE* handle ) function")
#define SYS_TIME_DelayMS(ms, handle)

#warning("The app needs define the SYS_TIME_DelayIsComplete ( SYS_TIME_HANDLE handle ) function")
#define SYS_TIME_DelayIsComplete(handle) (0)

#warning("The app needs define the void EIC_CallbackRegister(EIC_PIN pin, EIC_CALLBACK callback, uintptr_t context) function")
#define EIC_CallbackRegister(pin, callback, context)

#warning("The app needs define the void EIC_InterruptEnable (EIC_PIN pin) function")
#define EIC_InterruptEnable(pin)

#warning("The app needs define the void EIC_InterruptDisable (EIC_PIN pin) function")
#define EIC_InterruptDisable(pin)

#warning("The app needs define the bool SYS_INT_Disable( void ) function")
#define SYS_INT_Disable() (0)

#warning("The app needs define the void SYS_INT_Restore( bool state ) function")
#define SYS_INT_Restore(state)

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // CONFIGURATION_H
/*******************************************************************************
 End of File
*/

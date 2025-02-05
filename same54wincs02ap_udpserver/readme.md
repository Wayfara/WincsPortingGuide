#  TCP Server Application

This WINCS02 application implements a UDP Server. In this application WINCS02 will host a UDP Server in Wi-Fi AP mode. User can connect computer and mobile phone to the AP and access the UDP Server with port **6666**.  After establishing a successful UDP server-client connection, the data exchange will take place.

## Building the Application

To build this application, open the project file \(`apps/tcp_server/firmware/wifi_ap_udp_server_sam_e54_xpro_wincs02.X`\) in MPLAB X IDE. For more details on opening the project file in MPLAB X IDE, refer to the [Opening the Project file](../wifi_easy_config/docs/GUID-671CCA8C-64AE-4EA1-B144-D46A6FEE76FF.md). The following table provides details on the project file.

|Project Name|Description|
|:-----------|:----------|
|`wifi_ap_udp_server_sam_e54_xpro_wincs02.X`|    MPLABX project for SAM E54 Xplained Pro evaluation kit and WINCS02 Add On Board
-   This application demonstrates a UDP server in Host Companion mode. After establishing a successful UDP server-client connection, the data exchange will take place.

<br />

## Running the Application

1.  Mount the WINS02 Add On Board on SAM E54 Xplained Pro evaluation kit at respective header. For more details about the boards placement in the SAM E54 X-plained host board, see [Figure 6-1](../wifi_easy_config/docs/GUID-7BA99DE1-89EB-4DD7-973B-974B175D657A.md#FIG_B4M_3WX_PZB)
2.  Connect the debugger USB port on the SAM E54 Xplained Pro evaluation kit to computer using a micro-USB cable.
3.  Build and program the code to the hardware using MPLABX IDE

    Figure 6-22. Programming the Board

    ![](docs/images/GUID-7B288BCE-2B86-4B4E-A43A-7E862137384C-low.png)

4.  Open the Terminal application \(for example, Tera Term or PuTTY\) on the PC

    Connect to the “EDBG Virtual COM Port" and configure the serial settings as follows:

    1.  Baud: 115200
    2.  Data: 8 Bits
    3.  Parity: None
    4.  Stop: 1 Bit
    5.  Flow Control: None
5. As the board boots up, it will host a AP with SSID **DEMO_AP_SOFTAP** with password **password**. After establishing a successful UDP server-client connection, the application will continue listening on the socket number configured for incoming messages and then write them back to the client connected.



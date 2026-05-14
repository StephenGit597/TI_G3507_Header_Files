//Designer:Stephen
//For TI_MSPM0G3507
#ifndef TI_UART_H
#define TI_UART_H
//标准字长头文件引用
#include"stdint.h"
/*-----------------------URAT0----------------------*/
//Power enable
#define URAT0_Power_enable_Register_Base 0x40108000
#define URAT0_Power_enable_Register_Offset 0x00000800
#define URAT0_Power_enable_Register (*((volatile uint32_t)(URAT0_Power_enable_Register_Base+URAT0_Power_enable_Register_Offset)))

//Reset Control
#define URAT0_Reset_Control_Register_Base 0x40108000
#define URAT0_Reset_Control_Register_Offset 0x00000804
#define URAT0_Reset_Control_Register (*((volatile uint32_t)(URAT0_Reset_Control_Register_Base+URAT0_Reset_Control_Register_Offset)))

//Peripheral Clock Configuration Register
#define UART0_Peripheral_Clock_Configuration_Register_Base 0x40108000
#define UART0_Peripheral_Clock_Configuration_Register_Offset 0x00000808
#define UART0_Peripheral_Clock_Configuration_Register (*((volatile uint32_t)(UART0_Peripheral_Clock_Configuration_Register_Base+UART0_Peripheral_Clock_Configuration_Register_Offset)))

//Reset status register
#define UART0_Reset_status_register_Base 0x40108000
#define UART0_Reset_status_register_Offset 0x00000814
#define UART0_Reset_status_register (*((volatile uint32_t)(UART0_Reset_status_register_Base+UART0_Reset_status_register_Offset)))

//Clock Divider
#define UART0_Clock_Divider_Register_Base 0x40108000
#define UART0_Clock_Divider_Register_Offset 0x00001000
#define UART0_Clock_Divider_Register (*((volatile uint32_t)(UART0_Clock_Divider_Register_Base+UART0_Clock_Divider_Register_Offset)))

//Clock Select for Ultra Low Power peripherals
#define UART0_Clock_Select_for_Ultra_Low_Power_peripherals_Register_Base 0x40108000
#define UART0_Clock_Select_for_Ultra_Low_Power_peripherals_Register_Offset 0x00001008
#define UART0_Clock_Select_for_Ultra_Low_Power_peripherals_Register (*((volatile uint32_t)(UART0_Clock_Select_for_Ultra_Low_Power_peripherals_Register_Base+UART0_Clock_Select_for_Ultra_Low_Power_peripherals_Register_Offset)))

//Peripheral Debug Control
#define UART0_Peripheral_Debug_Control_Register_Base 0x40108000
#define UART0_Peripheral_Debug_Control_Register_Offset 0x00001018
#define UART0_Peripheral_Debug_Control_Register (*((volatile uint32_t)(UART0_Peripheral_Debug_Control_Register_Base+UART0_Peripheral_Debug_Control_Register_Offset)))

//Event Mode
#define UART0_Event_Mode_Register_Base 0x40108000
#define UART0_Event_Mode_Register_Offset 0x000010E0
#define UART0_Event_Mode_Register (*((volatile uint32_t)(UART0_Event_Mode_Register_Base+UART0_Event_Mode_Register_Offset)))

//Interrupt control register
#define UART0_Interrupt_control_Register_Base 0x40108000
#define UART0_Interrupt_control_Register_Offset 0x000010E4
#define UART0_Interrupt_control_Register (*((volatile uint32_t)(UART0_Interrupt_control_Register_Base+UART0_Interrupt_control_Register_Offset)))

//UART Control Register 0
#define UART0_UART_Control_Register_0_Base 0x40108000
#define UART0_UART_Control_Register_0_Offset 0x00001100
#define UART0_UART_Control_Register_0 (*((volatile uint32_t)(UART0_UART_Control_Register_0_Base+UART0_UART_Control_Register_0_Offset)))

//UART Line Control Register
#define UART0_Line_Control_Register_Base 0x40108000
#define UART0_Line_Control_Register_Offset 0x00001104
#define UART0_Line_Control_Register (*((volatile uint32_t)(UART0_Line_Control_Register_Base+UART0_Line_Control_Register_Offset)))

//UART Status Register
#define UART0_Status_Register_Base 0x40108000
#define UART0_Status_Register_Offset 0x00001108
#define UART0_Status_Register (*((volatile uint32_t)(UART0_Status_Register_Base+UART0_Status_Register_Offset)))

//UART Interrupt FIFO Level Select Register
#define UART0_Interrupt_FIFO_Level_Select_Register_Base 0x40108000
#define UART0_Interrupt_FIFO_Level_Select_Register_Offset 0x0000110C
#define UART0_Interrupt_FIFO_Level_Select_Register (*((volatile uint32_t)(UART0_Interrupt_FIFO_Level_Select_Register_Base+UART0_Interrupt_FIFO_Level_Select_Register_Offset)))

//UART Integer Baud-Rate Divisor Register
#define UART0_Integer_Baud_Rate_Divisor_Register_Base 0x40108000
#define UART0_Integer_Baud_Rate_Divisor_Register_Offset 0x00001110
#define UART0_Integer_Baud_Rate_Divisor_Register (*((volatile uint32_t)(UART0_Integer_Baud_Rate_Divisor_Register_Base+UART0_Integer_Baud_Rate_Divisor_Register_Offset)))

//UART Fractional Baud-Rate Divisor Register
#define UART0_Fractional_Baud_Rate_Divisor_Register_Base 0x40108000
#define UART0_Fractional_Baud_Rate_Divisor_Register_Offset 0x00001114
#define UART0_Fractional_Baud_Rate_Divisor_Register (*((volatile uint32_t)(UART0_Fractional_Baud_Rate_Divisor_Register_Base+UART0_Fractional_Baud_Rate_Divisor_Register_Offset)))

//Glitch Filter Control
#define UART0_Glitch_Filter_Control_Register_Base 0x40108000
#define UART0_Glitch_Filter_Control_Register_Offset 0x00001118
#define UART0_Glitch_Filter_Control_Register (*((volatile uint32_t)(UART0_Glitch_Filter_Control_Register_Base+UART0_Glitch_Filter_Control_Register_Offset)))

//UART Transmit Data Register
#define UART0_Transmit_Data_Register_Base 0x40108000
#define UART0_Transmit_Data_Register_Offset 0x00001120
#define UART0_Transmit_Data_Register (*((volatile uint32_t)(UART0_Transmit_Data_Register_Base+UART0_Transmit_Data_Register_Offset)))

//UART Receive Data Register
#define UART0_Receive_Data_Register_Base 0x40108000
#define UART0_Receive_Data_Register_Offset 0x00001124
#define UART0_Receive_Data_Register (*((volatile uint32_t)(UART0_Receive_Data_Register_Base+UART0_Receive_Data_Register_Offset)))

//UART LIN Mode Counter Register
#define UART0_LIN_Mode_Counter_Register_Base 0x40108000
#define UART0_LIN_Mode_Counter_Register_Offset 0x00001130
#define UART0_LIN_Mode_Counter_Register (*((volatile uint32_t)(UART0_LIN_Mode_Counter_Register_Base+UART0_LIN_Mode_Counter_Register_Offset)))

//UART LIN Mode Control Register
#define UART0_LIN_Mode_Control_Register_Base 0x40108000
#define UART0_LIN_Mode_Control_Register_Offset 0x00001134
#define UART0_LIN_Mode_Control_Register (*((volatile uint32_t)(UART0_LIN_Mode_Control_Register_Base+UART0_LIN_Mode_Control_Register_Offset)))

//UART LIN Mode Capture 0 Register
#define UART0_LIN_Mode_Capture_0_Register_Base 0x40108000
#define UART0_LIN_Mode_Capture_0_Register_Offset 0x00001138
#define UART0_LIN_Mode_Capture_0_Register (*((volatile uint32_t)(UART0_LIN_Mode_Capture_0_Register_Base+UART0_LIN_Mode_Capture_0_Register_Offset)))

//UART LIN Mode Capture 1 Register
#define UART0_LIN_Mode_Capture_1_Register_Base 0x40108000
#define UART0_LIN_Mode_Capture_1_Register_Offset 0x0000113C
#define UART0_LIN_Mode_Capture_1_Register (*((volatile uint32_t)(UART0_LIN_Mode_Capture_1_Register_Base+UART0_LIN_Mode_Capture_1_Register_Offset)))

//eUSCI_Ax IrDA Control Word Register
#define UART0_eUSCI_Ax_IrDA_Control_Word_Register_Base 0x40108000
#define UART0_eUSCI_Ax_IrDA_Control_Word_Register_Offset 0x00001140
#define UART0_eUSCI_Ax_IrDA_Control_Word_Register (*((volatile uint32_t)(UART0_eUSCI_Ax_IrDA_Control_Word_Register_Base+UART0_eUSCI_Ax_IrDA_Control_Word_Register_Offset)))

//Self Address Mask Register
#define UART0_Self_Address_Mask_Register_Base 0x40108000
#define UART0_Self_Address_Mask_Register_Offset 0x00001148
#define UART0_Self_Address_Mask_Register (*((volatile uint32_t)(UART0_Self_Address_Mask_Register_Base+UART0_Self_Address_Mask_Register_Offset)))

//Self Address Register
#define UART0_Self_Address_Register_Base 0x40108000
#define UART0_Self_Address_Register_Offset 0x0000114C
#define UART0_Self_Address_Register (*((volatile uint32_t)(UART0_Self_Address_Register_Base+UART0_Self_Address_Register_Offset)))

//Clock Divider
#define UART0_Clock_Divider_Register_Base 0x40108000
#define UART0_Clock_Divider_Register_Offset 0x00001160
#define UART0_Clock_Divider_Register (*((volatile uint32_t)(UART0_Clock_Divider_Register_Base+UART0_Clock_Divider_Register_Offset)))

/*-----------------------URAT1----------------------*/
//Power enable
#define URAT1_Power_enable_Register_Base 0x40100000
#define URAT1_Power_enable_Register_Offset 0x00000800
#define URAT1_Power_enable_Register (*((volatile uint32_t)(URAT1_Power_enable_Register_Base+URAT1_Power_enable_Register_Offset)))

//Reset Control
#define URAT1_Reset_Control_Register_Base 0x40100000
#define URAT1_Reset_Control_Register_Offset 0x00000804
#define URAT1_Reset_Control_Register (*((volatile uint32_t)(URAT1_Reset_Control_Register_Base+URAT1_Reset_Control_Register_Offset)))

//Peripheral Clock Configuration Register
#define UART1_Peripheral_Clock_Configuration_Register_Base 0x40100000
#define UART1_Peripheral_Clock_Configuration_Register_Offset 0x00000808
#define UART1_Peripheral_Clock_Configuration_Register (*((volatile uint32_t)(UART1_Peripheral_Clock_Configuration_Register_Base+UART1_Peripheral_Clock_Configuration_Register_Offset)))

//Reset status register
#define UART1_Reset_status_register_Base 0x40100000
#define UART1_Reset_status_register_Offset 0x00000814
#define UART1_Reset_status_register (*((volatile uint32_t)(UART1_Reset_status_register_Base+UART1_Reset_status_register_Offset)))

//Clock Divider
#define UART1_Clock_Divider_Register_Base 0x40100000
#define UART1_Clock_Divider_Register_Offset 0x00001000
#define UART1_Clock_Divider_Register (*((volatile uint32_t)(UART1_Clock_Divider_Register_Base+UART1_Clock_Divider_Register_Offset)))

//Clock Select for Ultra Low Power peripherals
#define UART1_Clock_Select_for_Ultra_Low_Power_peripherals_Register_Base 0x40100000
#define UART1_Clock_Select_for_Ultra_Low_Power_peripherals_Register_Offset 0x00001008
#define UART1_Clock_Select_for_Ultra_Low_Power_peripherals_Register (*((volatile uint32_t)(UART1_Clock_Select_for_Ultra_Low_Power_peripherals_Register_Base+UART1_Clock_Select_for_Ultra_Low_Power_peripherals_Register_Offset)))

//Peripheral Debug Control
#define UART1_Peripheral_Debug_Control_Register_Base 0x40100000
#define UART1_Peripheral_Debug_Control_Register_Offset 0x00001018
#define UART1_Peripheral_Debug_Control_Register (*((volatile uint32_t)(UART1_Peripheral_Debug_Control_Register_Base+UART1_Peripheral_Debug_Control_Register_Offset)))

//Event Mode
#define UART1_Event_Mode_Register_Base 0x40100000
#define UART1_Event_Mode_Register_Offset 0x000010E0
#define UART1_Event_Mode_Register (*((volatile uint32_t)(UART1_Event_Mode_Register_Base+UART1_Event_Mode_Register_Offset)))

//Interrupt control register
#define UART1_Interrupt_control_Register_Base 0x40100000
#define UART1_Interrupt_control_Register_Offset 0x000010E4
#define UART1_Interrupt_control_Register (*((volatile uint32_t)(UART1_Interrupt_control_Register_Base+UART1_Interrupt_control_Register_Offset)))

//UART Control Register 0
#define UART1_UART_Control_Register_0_Base 0x40100000
#define UART1_UART_Control_Register_0_Offset 0x00001100
#define UART1_UART_Control_Register_0 (*((volatile uint32_t)(UART1_UART_Control_Register_0_Base+UART1_UART_Control_Register_0_Offset)))

//UART Line Control Register
#define UART1_Line_Control_Register_Base 0x40100000
#define UART1_Line_Control_Register_Offset 0x00001104
#define UART1_Line_Control_Register (*((volatile uint32_t)(UART1_Line_Control_Register_Base+UART1_Line_Control_Register_Offset)))

//UART Status Register
#define UART1_Status_Register_Base 0x40100000
#define UART1_Status_Register_Offset 0x00001108
#define UART1_Status_Register (*((volatile uint32_t)(UART1_Status_Register_Base+UART1_Status_Register_Offset)))

//UART Interrupt FIFO Level Select Register
#define UART1_Interrupt_FIFO_Level_Select_Register_Base 0x40100000
#define UART1_Interrupt_FIFO_Level_Select_Register_Offset 0x0000110C
#define UART1_Interrupt_FIFO_Level_Select_Register (*((volatile uint32_t)(UART1_Interrupt_FIFO_Level_Select_Register_Base+UART1_Interrupt_FIFO_Level_Select_Register_Offset)))

//UART Integer Baud-Rate Divisor Register
#define UART1_Integer_Baud_Rate_Divisor_Register_Base 0x40100000
#define UART1_Integer_Baud_Rate_Divisor_Register_Offset 0x00001110
#define UART1_Integer_Baud_Rate_Divisor_Register (*((volatile uint32_t)(UART1_Integer_Baud_Rate_Divisor_Register_Base+UART1_Integer_Baud_Rate_Divisor_Register_Offset)))

//UART Fractional Baud-Rate Divisor Register
#define UART1_Fractional_Baud_Rate_Divisor_Register_Base 0x40100000
#define UART1_Fractional_Baud_Rate_Divisor_Register_Offset 0x00001114
#define UART1_Fractional_Baud_Rate_Divisor_Register (*((volatile uint32_t)(UART1_Fractional_Baud_Rate_Divisor_Register_Base+UART1_Fractional_Baud_Rate_Divisor_Register_Offset)))

//Glitch Filter Control
#define UART1_Glitch_Filter_Control_Register_Base 0x40100000
#define UART1_Glitch_Filter_Control_Register_Offset 0x00001118
#define UART1_Glitch_Filter_Control_Register (*((volatile uint32_t)(UART1_Glitch_Filter_Control_Register_Base+UART1_Glitch_Filter_Control_Register_Offset)))

//UART Transmit Data Register
#define UART1_Transmit_Data_Register_Base 0x40100000
#define UART1_Transmit_Data_Register_Offset 0x00001120
#define UART1_Transmit_Data_Register (*((volatile uint32_t)(UART1_Transmit_Data_Register_Base+UART1_Transmit_Data_Register_Offset)))

//UART Receive Data Register
#define UART1_Receive_Data_Register_Base 0x40100000
#define UART1_Receive_Data_Register_Offset 0x00001124
#define UART1_Receive_Data_Register (*((volatile uint32_t)(UART1_Receive_Data_Register_Base+UART1_Receive_Data_Register_Offset)))

//UART LIN Mode Counter Register
#define UART1_LIN_Mode_Counter_Register_Base 0x40100000
#define UART1_LIN_Mode_Counter_Register_Offset 0x00001130
#define UART1_LIN_Mode_Counter_Register (*((volatile uint32_t)(UART1_LIN_Mode_Counter_Register_Base+UART1_LIN_Mode_Counter_Register_Offset)))

//UART LIN Mode Control Register
#define UART1_LIN_Mode_Control_Register_Base 0x40100000
#define UART1_LIN_Mode_Control_Register_Offset 0x00001134
#define UART1_LIN_Mode_Control_Register (*((volatile uint32_t)(UART1_LIN_Mode_Control_Register_Base+UART1_LIN_Mode_Control_Register_Offset)))

//UART LIN Mode Capture 0 Register
#define UART1_LIN_Mode_Capture_0_Register_Base 0x40100000
#define UART1_LIN_Mode_Capture_0_Register_Offset 0x00001138
#define UART1_LIN_Mode_Capture_0_Register (*((volatile uint32_t)(UART1_LIN_Mode_Capture_0_Register_Base+UART1_LIN_Mode_Capture_0_Register_Offset)))

//UART LIN Mode Capture 1 Register
#define UART1_LIN_Mode_Capture_1_Register_Base 0x40100000
#define UART1_LIN_Mode_Capture_1_Register_Offset 0x0000113C
#define UART1_LIN_Mode_Capture_1_Register (*((volatile uint32_t)(UART1_LIN_Mode_Capture_1_Register_Base+UART1_LIN_Mode_Capture_1_Register_Offset)))

//eUSCI_Ax IrDA Control Word Register
#define UART1_eUSCI_Ax_IrDA_Control_Word_Register_Base 0x40100000
#define UART1_eUSCI_Ax_IrDA_Control_Word_Register_Offset 0x00001140
#define UART1_eUSCI_Ax_IrDA_Control_Word_Register (*((volatile uint32_t)(UART1_eUSCI_Ax_IrDA_Control_Word_Register_Base+UART1_eUSCI_Ax_IrDA_Control_Word_Register_Offset)))

//Self Address Mask Register
#define UART1_Self_Address_Mask_Register_Base 0x40100000
#define UART1_Self_Address_Mask_Register_Offset 0x00001148
#define UART1_Self_Address_Mask_Register (*((volatile uint32_t)(UART1_Self_Address_Mask_Register_Base+UART1_Self_Address_Mask_Register_Offset)))

//Self Address Register
#define UART1_Self_Address_Register_Base 0x40100000
#define UART1_Self_Address_Register_Offset 0x0000114C
#define UART1_Self_Address_Register (*((volatile uint32_t)(UART1_Self_Address_Register_Base+UART1_Self_Address_Register_Offset)))

//Clock Divider
#define UART1_Clock_Divider_Register_Base 0x40100000
#define UART1_Clock_Divider_Register_Offset 0x00001160
#define UART1_Clock_Divider_Register (*((volatile uint32_t)(UART1_Clock_Divider_Register_Base+UART1_Clock_Divider_Register_Offset)))

/*-----------------------URAT2----------------------*/
//Power enable
#define URAT2_Power_enable_Register_Base 0x40102000
#define URAT2_Power_enable_Register_Offset 0x00000800
#define URAT2_Power_enable_Register (*((volatile uint32_t)(URAT2_Power_enable_Register_Base+URAT2_Power_enable_Register_Offset)))

//Reset Control
#define URAT2_Reset_Control_Register_Base 0x40102000
#define URAT2_Reset_Control_Register_Offset 0x00000804
#define URAT2_Reset_Control_Register (*((volatile uint32_t)(URAT2_Reset_Control_Register_Base+URAT2_Reset_Control_Register_Offset)))

//Peripheral Clock Configuration Register
#define UART2_Peripheral_Clock_Configuration_Register_Base 0x40102000
#define UART2_Peripheral_Clock_Configuration_Register_Offset 0x00000808
#define UART2_Peripheral_Clock_Configuration_Register (*((volatile uint32_t)(UART2_Peripheral_Clock_Configuration_Register_Base+UART2_Peripheral_Clock_Configuration_Register_Offset)))

//Reset status register
#define UART2_Reset_status_register_Base 0x40102000
#define UART2_Reset_status_register_Offset 0x00000814
#define UART2_Reset_status_register (*((volatile uint32_t)(UART2_Reset_status_register_Base+UART2_Reset_status_register_Offset)))

//Clock Divider
#define UART2_Clock_Divider_Register_Base 0x40102000
#define UART2_Clock_Divider_Register_Offset 0x00001000
#define UART2_Clock_Divider_Register (*((volatile uint32_t)(UART2_Clock_Divider_Register_Base+UART2_Clock_Divider_Register_Offset)))

//Clock Select for Ultra Low Power peripherals
#define UART2_Clock_Select_for_Ultra_Low_Power_peripherals_Register_Base 0x40102000
#define UART2_Clock_Select_for_Ultra_Low_Power_peripherals_Register_Offset 0x00001008
#define UART2_Clock_Select_for_Ultra_Low_Power_peripherals_Register (*((volatile uint32_t)(UART2_Clock_Select_for_Ultra_Low_Power_peripherals_Register_Base+UART2_Clock_Select_for_Ultra_Low_Power_peripherals_Register_Offset)))

//Peripheral Debug Control
#define UART2_Peripheral_Debug_Control_Register_Base 0x40102000
#define UART2_Peripheral_Debug_Control_Register_Offset 0x00001018
#define UART2_Peripheral_Debug_Control_Register (*((volatile uint32_t)(UART2_Peripheral_Debug_Control_Register_Base+UART2_Peripheral_Debug_Control_Register_Offset)))

//Event Mode
#define UART2_Event_Mode_Register_Base 0x40102000
#define UART2_Event_Mode_Register_Offset 0x000010E0
#define UART2_Event_Mode_Register (*((volatile uint32_t)(UART2_Event_Mode_Register_Base+UART2_Event_Mode_Register_Offset)))

//Interrupt control register
#define UART2_Interrupt_control_Register_Base 0x40102000
#define UART2_Interrupt_control_Register_Offset 0x000010E4
#define UART2_Interrupt_control_Register (*((volatile uint32_t)(UART2_Interrupt_control_Register_Base+UART2_Interrupt_control_Register_Offset)))

//UART Control Register 0
#define UART2_UART_Control_Register_0_Base 0x40102000
#define UART2_UART_Control_Register_0_Offset 0x00001100
#define UART2_UART_Control_Register_0 (*((volatile uint32_t)(UART2_UART_Control_Register_0_Base+UART2_UART_Control_Register_0_Offset)))

//UART Line Control Register
#define UART2_Line_Control_Register_Base 0x40102000
#define UART2_Line_Control_Register_Offset 0x00001104
#define UART2_Line_Control_Register (*((volatile uint32_t)(UART2_Line_Control_Register_Base+UART2_Line_Control_Register_Offset)))

//UART Status Register
#define UART2_Status_Register_Base 0x40102000
#define UART2_Status_Register_Offset 0x00001108
#define UART2_Status_Register (*((volatile uint32_t)(UART2_Status_Register_Base+UART2_Status_Register_Offset)))

//UART Interrupt FIFO Level Select Register
#define UART2_Interrupt_FIFO_Level_Select_Register_Base 0x40102000
#define UART2_Interrupt_FIFO_Level_Select_Register_Offset 0x0000110C
#define UART2_Interrupt_FIFO_Level_Select_Register (*((volatile uint32_t)(UART2_Interrupt_FIFO_Level_Select_Register_Base+UART2_Interrupt_FIFO_Level_Select_Register_Offset)))

//UART Integer Baud-Rate Divisor Register
#define UART2_Integer_Baud_Rate_Divisor_Register_Base 0x40102000
#define UART2_Integer_Baud_Rate_Divisor_Register_Offset 0x00001110
#define UART2_Integer_Baud_Rate_Divisor_Register (*((volatile uint32_t)(UART2_Integer_Baud_Rate_Divisor_Register_Base+UART2_Integer_Baud_Rate_Divisor_Register_Offset)))

//UART Fractional Baud-Rate Divisor Register
#define UART2_Fractional_Baud_Rate_Divisor_Register_Base 0x40102000
#define UART2_Fractional_Baud_Rate_Divisor_Register_Offset 0x00001114
#define UART2_Fractional_Baud_Rate_Divisor_Register (*((volatile uint32_t)(UART2_Fractional_Baud_Rate_Divisor_Register_Base+UART2_Fractional_Baud_Rate_Divisor_Register_Offset)))

//Glitch Filter Control
#define UART2_Glitch_Filter_Control_Register_Base 0x40102000
#define UART2_Glitch_Filter_Control_Register_Offset 0x00001118
#define UART2_Glitch_Filter_Control_Register (*((volatile uint32_t)(UART2_Glitch_Filter_Control_Register_Base+UART2_Glitch_Filter_Control_Register_Offset)))

//UART Transmit Data Register
#define UART2_Transmit_Data_Register_Base 0x40102000
#define UART2_Transmit_Data_Register_Offset 0x00001120
#define UART2_Transmit_Data_Register (*((volatile uint32_t)(UART2_Transmit_Data_Register_Base+UART2_Transmit_Data_Register_Offset)))

//UART Receive Data Register
#define UART2_Receive_Data_Register_Base 0x40102000
#define UART2_Receive_Data_Register_Offset 0x00001124
#define UART2_Receive_Data_Register (*((volatile uint32_t)(UART2_Receive_Data_Register_Base+UART2_Receive_Data_Register_Offset)))

//UART LIN Mode Counter Register
#define UART2_LIN_Mode_Counter_Register_Base 0x40102000
#define UART2_LIN_Mode_Counter_Register_Offset 0x00001130
#define UART2_LIN_Mode_Counter_Register (*((volatile uint32_t)(UART2_LIN_Mode_Counter_Register_Base+UART2_LIN_Mode_Counter_Register_Offset)))

//UART LIN Mode Control Register
#define UART2_LIN_Mode_Control_Register_Base 0x40102000
#define UART2_LIN_Mode_Control_Register_Offset 0x00001134
#define UART2_LIN_Mode_Control_Register (*((volatile uint32_t)(UART2_LIN_Mode_Control_Register_Base+UART2_LIN_Mode_Control_Register_Offset)))

//UART LIN Mode Capture 0 Register
#define UART2_LIN_Mode_Capture_0_Register_Base 0x40102000
#define UART2_LIN_Mode_Capture_0_Register_Offset 0x00001138
#define UART2_LIN_Mode_Capture_0_Register (*((volatile uint32_t)(UART2_LIN_Mode_Capture_0_Register_Base+UART2_LIN_Mode_Capture_0_Register_Offset)))

//UART LIN Mode Capture 1 Register
#define UART2_LIN_Mode_Capture_1_Register_Base 0x40102000
#define UART2_LIN_Mode_Capture_1_Register_Offset 0x0000113C
#define UART2_LIN_Mode_Capture_1_Register (*((volatile uint32_t)(UART2_LIN_Mode_Capture_1_Register_Base+UART2_LIN_Mode_Capture_1_Register_Offset)))

//eUSCI_Ax IrDA Control Word Register
#define UART2_eUSCI_Ax_IrDA_Control_Word_Register_Base 0x40102000
#define UART2_eUSCI_Ax_IrDA_Control_Word_Register_Offset 0x00001140
#define UART2_eUSCI_Ax_IrDA_Control_Word_Register (*((volatile uint32_t)(UART2_eUSCI_Ax_IrDA_Control_Word_Register_Base+UART2_eUSCI_Ax_IrDA_Control_Word_Register_Offset)))

//Self Address Mask Register
#define UART2_Self_Address_Mask_Register_Base 0x40102000
#define UART2_Self_Address_Mask_Register_Offset 0x00001148
#define UART2_Self_Address_Mask_Register (*((volatile uint32_t)(UART2_Self_Address_Mask_Register_Base+UART2_Self_Address_Mask_Register_Offset)))

//Self Address Register
#define UART2_Self_Address_Register_Base 0x40102000
#define UART2_Self_Address_Register_Offset 0x0000114C
#define UART2_Self_Address_Register (*((volatile uint32_t)(UART2_Self_Address_Register_Base+UART2_Self_Address_Register_Offset)))

//Clock Divider
#define UART2_Clock_Divider_Register_Base 0x40102000
#define UART2_Clock_Divider_Register_Offset 0x00001160
#define UART2_Clock_Divider_Register (*((volatile uint32_t)(UART2_Clock_Divider_Register_Base+UART2_Clock_Divider_Register_Offset)))

/*-----------------------URAT3----------------------*/
//Power enable
#define URAT3_Power_enable_Register_Base 0x40500000
#define URAT3_Power_enable_Register_Offset 0x00000800
#define URAT3_Power_enable_Register (*((volatile uint32_t)(URAT3_Power_enable_Register_Base+URAT3_Power_enable_Register_Offset)))

//Reset Control
#define URAT3_Reset_Control_Register_Base 0x40500000
#define URAT3_Reset_Control_Register_Offset 0x00000804
#define URAT3_Reset_Control_Register (*((volatile uint32_t)(URAT3_Reset_Control_Register_Base+URAT3_Reset_Control_Register_Offset)))

//Peripheral Clock Configuration Register
#define UART3_Peripheral_Clock_Configuration_Register_Base 0x40500000
#define UART3_Peripheral_Clock_Configuration_Register_Offset 0x00000808
#define UART3_Peripheral_Clock_Configuration_Register (*((volatile uint32_t)(UART3_Peripheral_Clock_Configuration_Register_Base+UART3_Peripheral_Clock_Configuration_Register_Offset)))

//Reset status register
#define UART3_Reset_status_register_Base 0x40500000
#define UART3_Reset_status_register_Offset 0x00000814
#define UART3_Reset_status_register (*((volatile uint32_t)(UART3_Reset_status_register_Base+UART3_Reset_status_register_Offset)))

//Clock Divider
#define UART3_Clock_Divider_Register_Base 0x40500000
#define UART3_Clock_Divider_Register_Offset 0x00001000
#define UART3_Clock_Divider_Register (*((volatile uint32_t)(UART3_Clock_Divider_Register_Base+UART3_Clock_Divider_Register_Offset)))

//Clock Select for Ultra Low Power peripherals
#define UART3_Clock_Select_for_Ultra_Low_Power_peripherals_Register_Base 0x40500000
#define UART3_Clock_Select_for_Ultra_Low_Power_peripherals_Register_Offset 0x00001008
#define UART3_Clock_Select_for_Ultra_Low_Power_peripherals_Register (*((volatile uint32_t)(UART3_Clock_Select_for_Ultra_Low_Power_peripherals_Register_Base+UART3_Clock_Select_for_Ultra_Low_Power_peripherals_Register_Offset)))

//Peripheral Debug Control
#define UART3_Peripheral_Debug_Control_Register_Base 0x40500000
#define UART3_Peripheral_Debug_Control_Register_Offset 0x00001018
#define UART3_Peripheral_Debug_Control_Register (*((volatile uint32_t)(UART3_Peripheral_Debug_Control_Register_Base+UART3_Peripheral_Debug_Control_Register_Offset)))

//Event Mode
#define UART3_Event_Mode_Register_Base 0x40500000
#define UART3_Event_Mode_Register_Offset 0x000010E0
#define UART3_Event_Mode_Register (*((volatile uint32_t)(UART3_Event_Mode_Register_Base+UART3_Event_Mode_Register_Offset)))

//Interrupt control register
#define UART3_Interrupt_control_Register_Base 0x40500000
#define UART3_Interrupt_control_Register_Offset 0x000010E4
#define UART3_Interrupt_control_Register (*((volatile uint32_t)(UART3_Interrupt_control_Register_Base+UART3_Interrupt_control_Register_Offset)))

//UART Control Register 0
#define UART3_UART_Control_Register_0_Base 0x40500000
#define UART3_UART_Control_Register_0_Offset 0x00001100
#define UART3_UART_Control_Register_0 (*((volatile uint32_t)(UART3_UART_Control_Register_0_Base+UART3_UART_Control_Register_0_Offset)))

//UART Line Control Register
#define UART3_Line_Control_Register_Base 0x40500000
#define UART3_Line_Control_Register_Offset 0x00001104
#define UART3_Line_Control_Register (*((volatile uint32_t)(UART3_Line_Control_Register_Base+UART3_Line_Control_Register_Offset)))

//UART Status Register
#define UART3_Status_Register_Base 0x40500000
#define UART3_Status_Register_Offset 0x00001108
#define UART3_Status_Register (*((volatile uint32_t)(UART3_Status_Register_Base+UART3_Status_Register_Offset)))

//UART Interrupt FIFO Level Select Register
#define UART3_Interrupt_FIFO_Level_Select_Register_Base 0x40500000
#define UART3_Interrupt_FIFO_Level_Select_Register_Offset 0x0000110C
#define UART3_Interrupt_FIFO_Level_Select_Register (*((volatile uint32_t)(UART3_Interrupt_FIFO_Level_Select_Register_Base+UART3_Interrupt_FIFO_Level_Select_Register_Offset)))

//UART Integer Baud-Rate Divisor Register
#define UART3_Integer_Baud_Rate_Divisor_Register_Base 0x40500000
#define UART3_Integer_Baud_Rate_Divisor_Register_Offset 0x00001110
#define UART3_Integer_Baud_Rate_Divisor_Register (*((volatile uint32_t)(UART3_Integer_Baud_Rate_Divisor_Register_Base+UART3_Integer_Baud_Rate_Divisor_Register_Offset)))

//UART Fractional Baud-Rate Divisor Register
#define UART3_Fractional_Baud_Rate_Divisor_Register_Base 0x40500000
#define UART3_Fractional_Baud_Rate_Divisor_Register_Offset 0x00001114
#define UART3_Fractional_Baud_Rate_Divisor_Register (*((volatile uint32_t)(UART3_Fractional_Baud_Rate_Divisor_Register_Base+UART3_Fractional_Baud_Rate_Divisor_Register_Offset)))

//Glitch Filter Control
#define UART3_Glitch_Filter_Control_Register_Base 0x40500000
#define UART3_Glitch_Filter_Control_Register_Offset 0x00001118
#define UART3_Glitch_Filter_Control_Register (*((volatile uint32_t)(UART3_Glitch_Filter_Control_Register_Base+UART3_Glitch_Filter_Control_Register_Offset)))

//UART Transmit Data Register
#define UART3_Transmit_Data_Register_Base 0x40500000
#define UART3_Transmit_Data_Register_Offset 0x00001120
#define UART3_Transmit_Data_Register (*((volatile uint32_t)(UART3_Transmit_Data_Register_Base+UART3_Transmit_Data_Register_Offset)))

//UART Receive Data Register
#define UART3_Receive_Data_Register_Base 0x40500000
#define UART3_Receive_Data_Register_Offset 0x00001124
#define UART3_Receive_Data_Register (*((volatile uint32_t)(UART3_Receive_Data_Register_Base+UART3_Receive_Data_Register_Offset)))

//UART LIN Mode Counter Register
#define UART3_LIN_Mode_Counter_Register_Base 0x40500000
#define UART3_LIN_Mode_Counter_Register_Offset 0x00001130
#define UART3_LIN_Mode_Counter_Register (*((volatile uint32_t)(UART3_LIN_Mode_Counter_Register_Base+UART3_LIN_Mode_Counter_Register_Offset)))

//UART LIN Mode Control Register
#define UART3_LIN_Mode_Control_Register_Base 0x40500000
#define UART3_LIN_Mode_Control_Register_Offset 0x00001134
#define UART3_LIN_Mode_Control_Register (*((volatile uint32_t)(UART3_LIN_Mode_Control_Register_Base+UART3_LIN_Mode_Control_Register_Offset)))

//UART LIN Mode Capture 0 Register
#define UART3_LIN_Mode_Capture_0_Register_Base 0x40500000
#define UART3_LIN_Mode_Capture_0_Register_Offset 0x00001138
#define UART3_LIN_Mode_Capture_0_Register (*((volatile uint32_t)(UART3_LIN_Mode_Capture_0_Register_Base+UART3_LIN_Mode_Capture_0_Register_Offset)))

//UART LIN Mode Capture 1 Register
#define UART3_LIN_Mode_Capture_1_Register_Base 0x40500000
#define UART3_LIN_Mode_Capture_1_Register_Offset 0x0000113C
#define UART3_LIN_Mode_Capture_1_Register (*((volatile uint32_t)(UART3_LIN_Mode_Capture_1_Register_Base+UART3_LIN_Mode_Capture_1_Register_Offset)))

//eUSCI_Ax IrDA Control Word Register
#define UART3_eUSCI_Ax_IrDA_Control_Word_Register_Base 0x40500000
#define UART3_eUSCI_Ax_IrDA_Control_Word_Register_Offset 0x00001140
#define UART3_eUSCI_Ax_IrDA_Control_Word_Register (*((volatile uint32_t)(UART3_eUSCI_Ax_IrDA_Control_Word_Register_Base+UART3_eUSCI_Ax_IrDA_Control_Word_Register_Offset)))

//Self Address Mask Register
#define UART3_Self_Address_Mask_Register_Base 0x40500000
#define UART3_Self_Address_Mask_Register_Offset 0x00001148
#define UART3_Self_Address_Mask_Register (*((volatile uint32_t)(UART3_Self_Address_Mask_Register_Base+UART3_Self_Address_Mask_Register_Offset)))

//Self Address Register
#define UART3_Self_Address_Register_Base 0x40500000
#define UART3_Self_Address_Register_Offset 0x0000114C
#define UART3_Self_Address_Register (*((volatile uint32_t)(UART3_Self_Address_Register_Base+UART3_Self_Address_Register_Offset)))

//Clock Divider
#define UART3_Clock_Divider_Register_Base 0x40500000
#define UART3_Clock_Divider_Register_Offset 0x00001160
#define UART3_Clock_Divider_Register (*((volatile uint32_t)(UART3_Clock_Divider_Register_Base+UART3_Clock_Divider_Register_Offset)))

/*----------------------------------------控制宏--------------------------------------*/
//URATx_Power_enable_Register
//Enable the power Notice:KEY must be set to 26h to write to this bit.
#define URATx_Power_enable_Register_Enable_Power 0x00000001
#define URATx_Power_enable_Register_KEY_to_allow_Power_State_Change 0x26000000

//URATx_Reset_Control_Register
//Assert reset to the peripheral
#define URATx_Reset_Control_Register_Assert_reset 0x00000001
//Clear the RESETSTKY bit in the STAT register
#define URATx_Reset_Control_Register_Clear_reset_sticky_bit 0x00000002
//B1h = KEY to allow write access to this register
#define URATx_Reset_Control_Register_Unlock_key 0xB1000000

//UARTx_Peripheral_Clock_Configuration_Register
//Async Clock Request is blocked from starting SYSOSC or forcing bus clock to 32MHz
#define UARTx_Peripheral_Clock_Configuration_Register_Async_Clock_Request_blocked_from_SYSOSC_or_forcing_bus_clock_to_32_MHz 0x00000100
//KEY to Allow State Change -- 0xA9
#define UARTx_Peripheral_Clock_Configuration_Register_KEY_to_Allow_State_Change 0xA9000000

//UARTx_Reset_status_register
//This bit indicates, if the peripheral was reset
#define UARTx_Reset_status_register_The_peripheral_was_reset 0x00010000

//UARTx_Clock_Divider_Register
//Selects divide ratio of module clock
#define UARTx_Clock_Divider_Register_Do_not_divide_clock_source 0x00000000
#define UARTx_Clock_Divider_Register_Divide_clock_source_by_2 0x00000001
#define UARTx_Clock_Divider_Register_Divide_clock_source_by_3 0x00000002
#define UARTx_Clock_Divider_Register_Divide_clock_source_by_4 0x00000003
#define UARTx_Clock_Divider_Register_Divide_clock_source_by_5 0x00000004
#define UARTx_Clock_Divider_Register_Divide_clock_source_by_6 0x00000005
#define UARTx_Clock_Divider_Register_Divide_clock_source_by_7 0x00000006
#define UARTx_Clock_Divider_Register_Divide_clock_source_by_8 0x00000007

//UARTx_Clock_Select_for_Ultra_Low_Power_peripherals_Register
//Selects LFCLK as clock source if enabled
#define UARTx_Clock_Select_for_Ultra_Low_Power_peripherals_Register_Select_LFCLK 0x00000002
//Selects MFCLK as clock source if enabled
#define UARTx_Clock_Select_for_Ultra_Low_Power_peripherals_Register_Select_MFCLK 0x00000004
//Selects BUS CLK as clock source if enabled
#define UARTx_Clock_Select_for_Ultra_Low_Power_peripherals_Register_Select_BUS_CLK 0x00000008

//UARTx_Peripheral_Debug_Control_Register
//Free run control
#define UARTx_Peripheral_Debug_Control_Register_The_peripheral_ignores_Core_Halted_input 0x00000001
//Soft halt boundary control
#define UARTx_Peripheral_Debug_Control_Register_The_peripheral_blocks_the_debug_freeze 0x00000002

//UARTx_Event_Mode_Register
//UART Module Interrupt Vector Value
//Event line mode select for event corresponding to CPU_INT
#define UARTx_Event_Mode_Register_CPU_INT_interrupt_or_event_line_disabled 0x00000000
#define UARTx_Event_Mode_Register_CPU_INT_interrupt_or_event_line_is_in_software_mode 0x00000001
#define UARTx_Event_Mode_Register_CPU_INT_interrupt_or_event_line_is_in_hardware_mode 0x00000002
//Event line mode select for event corresponding to DMA_TRIG_RX
#define UARTx_Event_Mode_Register_DMA_TRIG_RX_interrupt_or_event_line_disabled 0x00000000
#define UARTx_Event_Mode_Register_DMA_TRIG_RX_interrupt_or_event_line_is_in_software_mode 0x00000004
#define UARTx_Event_Mode_Register_DMA_TRIG_RX_interrupt_or_event_line_is_in_hardware_mode 0x00000008
//Event line mode select for event corresponding to DMA_TRIG_TX
#define UARTx_Event_Mode_Register_DMA_TRIG_TX_interrupt_or_event_line_disabled 0x00000000
#define UARTx_Event_Mode_Register_DMA_TRIG_TX_interrupt_or_event_line_is_in_software_mode 0x00000010
#define UARTx_Event_Mode_Register_DMA_TRIG_TX_interrupt_or_event_line_is_in_hardware_mode 0x00000020

//UARTx_Interrupt_control_Register
//Writing a 1 to this field re-evaluates the interrupt sources
#define UARTx_Interrupt_control_Register_interrupt_or_event_line_in_software_mode 0x00000001

//UARTx_UART_Control_Register_0
//UART Module Enable
#define UARTx_UART_Control_Register_0_Enable_module 0x00000001
//UART Loop Back Enable
#define UARTx_UART_Control_Register_UARTxTX_pathfed_through_the_UARTxRX_path_internally 0x00000004
//UART Receive Enable If the UART is disabled in the middle of a receive
#define UARTx_UART_Control_Register_Enable_receive_section_of_UART 0x00000008
//UART Transmit Enable If the UART is disabled in the middle of a transmission
#define UARTx_UART_Control_Register_Enable_transmit_section_of_UART 0x00000010
//TXD Pin Control Enable
#define UARTx_UART_Control_Register_TXD_pin_controlled_by_TXD_OUT 0x00000020
//TXD Pin Control Controls the TXD pin when TXD_OUT_EN = 1 and TXE = 0.
#define UARTx_UART_Control_Register_TXD_pin_is_high 0x00000040
//Manchester Encode enable
#define UARTx_UART_Control_Register_Enable_Manchester_Encoding 0x00000080
//Set the communication mode and protocol used
#define UARTx_UART_Control_Register_Normal_operation 0x00000000
#define UARTx_UART_Control_Register_RS485_mode 0x00000100
#define UARTx_UART_Control_Register_IDLE_Line_Mode 0x00000200
#define UARTx_UART_Control_Register_9_Bit_Address_mode 0x00000300
#define UARTx_UART_Control_Register_ISO7816_mode 0x00000400
#define UARTx_UART_Control_Register_DALI_Mode 0x00000500
//Request to Send
#define UARTx_UART_Control_Register_Signal_RTS 0x00001000
//Enable hardware controlled Request to Send
#define UARTx_UART_Control_Register_Enable_RTS_hardware_flow_control 0x00002000
//Enable Clear To Send
#define UARTx_UART_Control_Register_Enable_CTS_hardware_flow_control 0x00004000
//High-Speed Bit Oversampling Enable NOTE
#define UARTx_UART_Control_Register_16x_oversampling 0x00000000
#define UARTx_UART_Control_Register_8x_oversampling 0x00008000
#define UARTx_UART_Control_Register_3x_oversampling 0x00010000
//UART Enable FIFOs
#define UARTx_UART_Control_Register_Enable_The_transmit_and_receive_FIFO_buffers 0x00020000
//Majority Vote Enable
#define UARTx_UART_Control_Register_Majority_voting_is_enabled 0x00040000
//Most Significant Bit First
#define UARTx_UART_Control_Register_Most_significant_bit_is_sent_first_in_the_protocol_packet 0x00080000

//UARTx_Line_Control_Register
//UART Send Break
#define UARTx_Line_Control_Register_A_low_level_is_continually_output_on_the_UARTxTXD_signal 0x00000001

//UARTx_Status_Register

//UARTx_Interrupt_FIFO_Level_Select_Register

//UARTx_Integer_Baud_Rate_Divisor_Register

//UARTx_Fractional_Baud_Rate_Divisor_Register

//UARTx_Glitch_Filter_Control_Register

//UARTx_Transmit_Data_Register

//UARTx_Receive_Data_Register

//UARTx_LIN_Mode_Counter_Register

//UARTx_LIN_Mode_Control_Register

//UARTx_LIN_Mode_Capture_0_Register

//UARTx_LIN_Mode_Capture_1_Register

//UARTx_eUSCI_Ax_IrDA_Control_Word_Register

//UARTx_Self_Address_Mask_Register

//UARTx_Self_Address_Register

//UARTx_Clock_Divider_Register









#endif
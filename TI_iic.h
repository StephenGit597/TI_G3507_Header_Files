//Designer:Stephen
//For TI_MSPM0G3507
#ifndef TI_iic_h
#define TI_iic_h
//标准字长头文件引用
#include"stdint.h"
/*----------------------------------------------I2C0----------------------------------------------*/
//Power enable
#define I2C0_Power_enable_Register_Base 0x400F0000
#define I2C0_Power_enable_Register_Offset 0x00000800
#define I2C0_Power_enable_Register (*((volatile uint32_t)(I2C0_Power_enable_Register_Base+I2C0_Power_enable_Register_Offset)))

//Reset Control
#define I2C0_Reset_Control_Register_Base 0x400F0000
#define I2C0_Reset_Control_Register_Offset 0x00000804
#define I2C0_Reset_Control_Register (*((volatile uint32_t)(I2C0_Reset_Control_Register_Base+I2C0_Reset_Control_Register_Offset)))

//Peripheral Clock Configuration Register
#define I2C0_Peripheral_Clock_Configuration_Register_Base 0x400F0000
#define I2C0_Peripheral_Clock_Configuration_Register_Offset 0x00000808
#define I2C0_Peripheral_Clock_Configuration_Register (*((volatile uint32_t)(I2C0_Peripheral_Clock_Configuration_Register_Base+I2C0_Peripheral_Clock_Configuration_Register_Offset)))

//peripheral enable and reset status
#define I2C0_peripheral_enable_and_reset_status_Register_Base 0x400F0000
#define I2C0_peripheral_enable_and_reset_status_Register_Offset 0x00000814
#define I2C0_peripheral_enable_and_reset_status_Register (*((volatile uint32_t)(I2C0_peripheral_enable_and_reset_status_Register_Base+I2C0_peripheral_enable_and_reset_status_Register_Offset)))

//Clock Divider
#define I2C0_Clock_Divider_Register_Base 0x400F0000
#define I2C0_Clock_Divider_Register_Offset 0x00001000
#define I2C0_Clock_Divider_Register (*((volatile uint32_t)(I2C0_Clock_Divider_Register_Base+I2C0_Clock_Divider_Register_Offset)))

//Clock Select for Ultra Low Power peripherals
#define I2C0_Clock_Select_for_Ultra_Low_Power_peripherals_Base 0x400F0000
#define I2C0_Clock_Select_for_Ultra_Low_Power_peripherals_Offset 0x00001004
#define I2C0_Clock_Select_for_Ultra_Low_Power_peripherals (*((volatile uint32_t)(I2C0_Clock_Select_for_Ultra_Low_Power_peripherals_Base+I2C0_Clock_Select_for_Ultra_Low_Power_peripherals_Offset)))

//Peripheral Debug Control
#define I2C0_Peripheral_Debug_Control_Register_Base 0x400F0000
#define I2C0_Peripheral_Debug_Control_Register_Offset 0x00001018
#define I2C0_Peripheral_Debug_Control_Register (*((volatile uint32_t)(I2C0_Peripheral_Debug_Control_Register_Base+I2C0_Peripheral_Debug_Control_Register_Offset)))

//Event Mode
#define I2C0_Event_Mode_Register_Base 0x400F0000
#define I2C0_Event_Mode_Register_Offset 0x000010E0
#define I2C0_Event_Mode_Register (*((volatile uint32_t)(I2C0_Event_Mode_Register_Base+I2C0_Event_Mode_Register_Offset)))

//Interrupt control register
#define I2C0_Interrupt_control_register_Base 0x400F0000
#define I2C0_Interrupt_control_register_Offset 0x000010E4
#define I2C0_Interrupt_control_register (*((volatile uint32_t)(I2C0_Interrupt_control_register_Base+I2C0_Interrupt_control_register_Offset)))

//Module Description
#define I2C0_Module_Description_register_Base 0x400F0000
#define I2C0_Module_Description_register_Offset 0x000010FC
#define I2C0_Module_Description_register (*((volatile uint32_t)(I2C0_Module_Description_register_Base+I2C0_Module_Description_register_Offset)))

//I2C Glitch Filter Control
#define I2C0_Glitch_Filter_Control_Base 0x400F0000
#define I2C0_Glitch_Filter_Control_Offset 0x00001200
#define I2C0_Glitch_Filter_Control (*((volatile uint32_t)(I2C0_Glitch_Filter_Control_Base+I2C0_Glitch_Filter_Control_Offset)))

//I2C Timeout Count Control Register
#define I2C0_Timeout_Count_Control_Register_Base 0x400F0000
#define I2C0_Timeout_Count_Control_Register_Offset 0x00001204
#define I2C0_Timeout_Count_Control_Register (*((volatile uint32_t)(I2C0_Timeout_Count_Control_Register_Base+I2C0_Timeout_Count_Control_Register_Offset)))

//I2C Timeout Count Register
#define I2C0_Timeout_Count_Register_Base 0x400F0000
#define I2C0_Timeout_Count_Register_Offset 0x00001208
#define I2C0_Timeout_Count_Register (*((volatile uint32_t)(I2C0_Timeout_Count_Register_Base+I2C0_Timeout_Count_Register_Offset)))

//I2C Controller Target Address Register
#define I2C0_Controller_Target_Address_Register_Base 0x400F0000
#define I2C0_Controller_Target_Address_Register_Offset 0x00001210
#define I2C0_Controller_Target_Address_Register (*((volatile uint32_t)(I2C0_Controller_Target_Address_Register_Base+I2C0_Controller_Target_Address_Register_Offset)))

//I2C Controller Control Register
#define I2C0_Controller_Control_Register_Base 0x400F0000
#define I2C0_Controller_Control_Register_Offset 0x00001214
#define I2C0_Controller_Control_Register (*((volatile uint32_t)(I2C0_Controller_Control_Register_Base+I2C0_Controller_Control_Register_Offset)))

//I2C Controller Status Register
#define I2C0_Controller_Status_Register_Base 0x400F0000
#define I2C0_Controller_Status_Register_Offset 0x00001218
#define I2C0_Controller_Status_Register (*((volatile uint32_t)(I2C0_Controller_Status_Register_Base+I2C0_Controller_Status_Register_Offset)))

//I2C Controller RXData
#define I2C0_Controller_RXData_Register_Base 0x400F0000
#define I2C0_Controller_RXData_Register_Offset 0x0000121C
#define I2C0_Controller_RXData (*((volatile uint32_t)(I2C1_Controller_RXData_Register_Base+I2C1_Controller_RXData_Register_Offset)))

//I2C Controller TXData
#define I2C0_I2C_Controller_TXData_Register_Base 0x400F0000
#define I2C0_I2C_Controller_TXData_Register_Offset 0x00001220
#define I2C0_I2C_Controller_TXData (*((volatile uint32_t)(I2C0_I2C_Controller_TXData_Register_Base+I2C0_I2C_Controller_TXData_Register_Offset)))

//I2C Controller Timer Period
#define I2C0_Controller_Timer_Period_Register_Base 0x400F0000
#define I2C0_Controller_Timer_Period_Register_Offset 0x00001224
#define I2C0_Controller_Timer_Period_Register (*((volatile uint32_t)(I2C0_Controller_Timer_Period_Register_Base+I2C0_Controller_Timer_Period_Register_Offset)))

//I2C Controller Configuration
#define I2C0_Controller_Configuration_Register_Base 0x400F0000
#define I2C0_Controller_Configuration_Register_Offset 0x00001228
#define I2C0_Controller_Configuration_Register (*((volatile uint32_t)(I2C0_Controller_Configuration_Register_Base+I2C0_Controller_Configuration_Register_Offset)))

//I2C Controller Bus Monitor
#define I2C0_Controller_Bus_Monitor_Register_Base 0x400F0000
#define I2C0_Controller_Bus_Monitor_Register_Offset 0x00001234
#define I2C0_Controller_Bus_Monitor_Register (*((volatile uint32_t)(I2C0_Controller_Bus_Monitor_Register_Base+I2C0_Controller_Bus_Monitor_Register_Offset)))

//I2C Controller FIFO Control
#define I2C0_Controller_FIFO_Control_Register_Base 0x400F0000
#define I2C0_Controller_FIFO_Control_Register_Offset 0x00001238
#define I2C0_Controller_FIFO_Control_Register (*((volatile uint32_t)(I2C0_Controller_FIFO_Control_Register_Base+I2C0_Controller_FIFO_Control_Register_Offset)))

//I2C Controller FIFO Status Register
#define I2C0_Controller_FIFO_Status_Register_Base 0x400F0000
#define I2C0_Controller_FIFO_Status_Register_Offset 0x0000123C
#define I2C0_Controller_FIFO_Status_Register (*((volatile uint32_t)(I2C0_Controller_FIFO_Status_Register_Base+I2C0_Controller_FIFO_Status_Register_Offset)))

//I2C Controller PEC control register
#define I2C0_Controller_PEC_control_register_Base 0x400F0000
#define I2C0_Controller_PEC_control_register_Offset 0x00001240
#define I2C0_Controller_PEC_control_register (*((volatile uint32_t)(I2C0_Controller_PEC_control_register_Base+I2C0_Controller_PEC_control_register_Offset)))

//I2C Controller PEC status register
#define I2C0_Controller_PEC_status_register_Base 0x400F0000
#define I2C0_Controller_PEC_status_register_Offset 0x00001244
#define I2C0_Controller_PEC_status_register (*((volatile uint32_t)(I2C0_Controller_PEC_status_register_Base+I2C0_Controller_PEC_status_register_Offset)))

//I2C Target Own Address
#define I2C0_I2C_Target_Own_Address_register_Base 0x400F0000
#define I2C0_I2C_Target_Own_Address_register_Offset 0x00001250
#define I2C0_I2C_Target_Own_Address_register (*((volatile uint32_t)(I2C0_I2C_Target_Own_Address_register_Base+I2C0_I2C_Target_Own_Address_register_Offset)))

//I2C Target Own Address 2
#define I2C0_Target_Own_Address_2_register_Base 0x400F0000
#define I2C0_Target_Own_Address_2_register_Offset 0x00001254
#define I2C0_Target_Own_Address_2_register (*((volatile uint32_t)(I2C0_Target_Own_Address_2_register_Base+I2C0_Target_Own_Address_2_register_Offset)))

//I2C Target Control Register
#define I2C0_Target_Control_Register_Base 0x400F0000
#define I2C0_Target_Control_Register_Offset 0x00001258
#define I2C0_Target_Control_Register (*((volatile uint32_t)(I2C0_Target_Control_Register_Base+I2C0_Target_Control_Register_Offset)))

//I2C Target Status Register
#define I2C0_Target_Status_Register_Base 0x400F0000
#define I2C0_Target_status_Register_Offset 0x0000125C
#define I2C0_Target_Status_Register (*((volatile uint32_t)(I2C0_Target_Status_Register_Base+I2C0_Target_status_Register_Offset)))

//I2C Target RXData
#define I2C0_Target_RXData_Register_Base 0x400F0000
#define I2C0_Target_RXData_Register_Offset 0x00001260
#define I2C0_Target_RXData_Register (*((volatile uint32_t)(I2C0_Target_RXData_Register_Base+I2C0_Target_RXData_Register_Offset)))

//I2C Target TXData
#define I2C0_Target_TXData_Register_Base 0x400F0000
#define I2C0_Target_TXData_Register_Offset 0x00001264
#define I2C0_Target_TXData_Register (*((volatile uint32_t)(I2C0_Target_TXData_Register_Base+I2C0_Target_TXData_Register_Offset)))

//I2C Target ACK Control
#define I2C0_Target_ACK_Control_Register_Base 0x400F0000
#define I2C0_Target_ACK_Control_Register_Offset 0x00001268
#define I2C0_Target_ACK_Control_Register (*((volatile uint32_t)(I2C0_Target_ACK_Control_Register_Base+I2C0_Target_ACK_Control_Register_Offset)))

//I2C Target FIFO Control
#define I2C0_Target_FIFO_Control_Register_Base 0x400F0000
#define I2C0_Target_FIFO_Control_Register_Offset 0x0000126C
#define I2C0_Target_FIFO_Control_Register (*((volatile uint32_t)(I2C1_Target_FIFO_Control_Register_Base+I2C1_Target_FIFO_Control_Register_Offset)))

//I2C Target FIFO Status Register
#define I2C0_Target_FIFO_Status_Register_Base 0x400F0000
#define I2C0_Target_FIFO_Status_Register_Offset 0x00001270
#define I2C0_Target_FIFO_Status_Register (*((volatile uint32_t)(I2C0_Target_FIFO_Status_Register_Base+I2C0_Target_FIFO_Status_Register_Offset)))

//I2C Target PEC control register
#define I2C0_Target_PEC_control_register_Base 0x400F0000
#define I2C0_Target_PEC_control_register_Offset 0x00001274
#define I2C0_Target_PEC_control_register (*((volatile uint32_t)(I2C0_Target_PEC_control_register_Base+I2C0_Target_PEC_control_register_Offset)))

//I2C Target PEC status register
#define I2C0_Target_PEC_status_register_Base 0x400F0000
#define I2C0_Target_PEC_status_register_Offset 0x00001278
#define I2C0_Target_PEC_status_register (*((volatile uint32_t)(I2C0_Target_PEC_status_register_Base+I2C0_Target_PEC_status_register_Offset)))

/*----------------------------------------------I2C1----------------------------------------------*/
//Power enable
#define I2C1_Power_enable_Register_Base 0x400F2000
#define I2C1_Power_enable_Register_Offset 0x00000800
#define I2C1_Power_enable_Register (*((volatile uint32_t)(I2C1_Power_enable_Register_Base+I2C1_Power_enable_Register_Offset)))

//Reset Control
#define I2C1_Reset_Control_Register_Base 0x400F2000
#define I2C1_Reset_Control_Register_Offset 0x00000804
#define I2C1_Reset_Control_Register (*((volatile uint32_t)(I2C1_Reset_Control_Register_Base+I2C1_Reset_Control_Register_Offset)))

//Peripheral Clock Configuration Register
#define I2C1_Peripheral_Clock_Configuration_Register_Base 0x400F2000
#define I2C1_Peripheral_Clock_Configuration_Register_Offset 0x00000808
#define I2C1_Peripheral_Clock_Configuration_Register (*((volatile uint32_t)(I2C1_Peripheral_Clock_Configuration_Register_Base+I2C1_Peripheral_Clock_Configuration_Register_Offset)))

//peripheral enable and reset status
#define I2C1_peripheral_enable_and_reset_status_Register_Base 0x400F2000
#define I2C1_peripheral_enable_and_reset_status_Register_Offset 0x00000814
#define I2C1_peripheral_enable_and_reset_status_Register (*((volatile uint32_t)(I2C1_peripheral_enable_and_reset_status_Register_Base+I2C1_peripheral_enable_and_reset_status_Register_Offset)))

//Clock Divider
#define I2C1_Clock_Divider_Register_Base 0x400F2000
#define I2C1_Clock_Divider_Register_Offset 0x00001000
#define I2C1_Clock_Divider_Register (*((volatile uint32_t)(I2C1_Clock_Divider_Register_Base+I2C1_Clock_Divider_Register_Offset)))

//Clock Select for Ultra Low Power peripherals
#define I2C1_Clock_Select_for_Ultra_Low_Power_peripherals_Base 0x400F2000
#define I2C1_Clock_Select_for_Ultra_Low_Power_peripherals_Offset 0x00001004
#define I2C1_Clock_Select_for_Ultra_Low_Power_peripherals (*((volatile uint32_t)(I2C1_Clock_Select_for_Ultra_Low_Power_peripherals_Base+I2C1_Clock_Select_for_Ultra_Low_Power_peripherals_Offset)))

//Peripheral Debug Control
#define I2C1_Peripheral_Debug_Control_Register_Base 0x400F2000
#define I2C1_Peripheral_Debug_Control_Register_Offset 0x00001018
#define I2C1_Peripheral_Debug_Control_Register (*((volatile uint32_t)(I2C1_Peripheral_Debug_Control_Register_Base+I2C1_Peripheral_Debug_Control_Register_Offset)))

//Event Mode
#define I2C1_Event_Mode_Register_Base 0x400F2000
#define I2C1_Event_Mode_Register_Offset 0x000010E0
#define I2C1_Event_Mode_Register (*((volatile uint32_t)(I2C1_Event_Mode_Register_Base+I2C1_Event_Mode_Register_Offset)))

//Interrupt control register
#define I2C1_Interrupt_control_register_Base 0x400F2000
#define I2C1_Interrupt_control_register_Offset 0x000010E4
#define I2C1_Interrupt_control_register (*((volatile uint32_t)(I2C1_Interrupt_control_register_Base+I2C1_Interrupt_control_register_Offset)))

//Module Description
#define I2C1_Module_Description_register_Base 0x400F2000
#define I2C1_Module_Description_register_Offset 0x000010FC
#define I2C1_Module_Description_register (*((volatile uint32_t)(I2C1_Module_Description_register_Base+I2C1_Module_Description_register_Offset)))

//I2C Glitch Filter Control
#define I2C1_Glitch_Filter_Control_Base 0x400F2000
#define I2C1_Glitch_Filter_Control_Offset 0x00001200
#define I2C1_Glitch_Filter_Control (*((volatile uint32_t)(I2C1_Glitch_Filter_Control_Base+I2C1_Glitch_Filter_Control_Offset)))

//I2C Timeout Count Control Register
#define I2C1_Timeout_Count_Control_Register_Base 0x400F2000
#define I2C1_Timeout_Count_Control_Register_Offset 0x00001204
#define I2C1_Timeout_Count_Control_Register (*((volatile uint32_t)(I2C1_Timeout_Count_Control_Register_Base+I2C1_Timeout_Count_Control_Register_Offset)))

//I2C Timeout Count Register
#define I2C1_Timeout_Count_Register_Base 0x400F2000
#define I2C1_Timeout_Count_Register_Offset 0x00001208
#define I2C1_Timeout_Count_Register (*((volatile uint32_t)(I2C1_Timeout_Count_Register_Base+I2C1_Timeout_Count_Register_Offset)))

//I2C Controller Target Address Register
#define I2C1_Controller_Target_Address_Register_Base 0x400F2000
#define I2C1_Controller_Target_Address_Register_Offset 0x00001210
#define I2C1_Controller_Target_Address_Register (*((volatile uint32_t)(I2C1_Controller_Target_Address_Register_Base+I2C1_Controller_Target_Address_Register_Offset)))

//I2C Controller Control Register
#define I2C1_Controller_Control_Register_Base 0x400F2000
#define I2C1_Controller_Control_Register_Offset 0x00001214
#define I2C1_Controller_Control_Register (*((volatile uint32_t)(I2C1_Controller_Control_Register_Base+I2C1_Controller_Control_Register_Offset)))

//I2C Controller Status Register
#define I2C1_Controller_Status_Register_Base 0x400F2000
#define I2C1_Controller_Status_Register_Offset 0x00001218
#define I2C1_Controller_Status_Register (*((volatile uint32_t)(I2C1_Controller_Status_Register_Base+I2C1_Controller_Status_Register_Offset)))

//I2C Controller RXData
#define I2C1_Controller_RXData_Register_Base 0x400F2000
#define I2C1_Controller_RXData_Register_Offset 0x0000121C
#define I2C1_Controller_RXData_Register (*((volatile uint32_t)(I2C1_Controller_RXData_Register_Base+I2C1_Controller_RXData_Register_Offset)))

//I2C Controller TXData
#define I2C1_I2C_Controller_TXData_Register_Base 0x400F2000
#define I2C1_I2C_Controller_TXData_Register_Offset 0x00001220
#define I2C1_I2C_Controller_TXData_Register (*((volatile uint32_t)(I2C1_I2C_Controller_TXData_Register_Base+I2C1_I2C_Controller_TXData_Register_Offset)))

//I2C Controller Timer Period
#define I2C1_Controller_Timer_Period_Register_Base 0x400F2000
#define I2C1_Controller_Timer_Period_Register_Offset 0x00001224
#define I2C1_Controller_Timer_Period_Register (*((volatile uint32_t)(I2C1_Controller_Timer_Period_Register_Base+I2C1_Controller_Timer_Period_Register_Offset)))

//I2C Controller Configuration
#define I2C1_Controller_Configuration_Register_Base 0x400F2000
#define I2C1_Controller_Configuration_Register_Offset 0x00001228
#define I2C1_Controller_Configuration_Register (*((volatile uint32_t)(I2C1_Controller_Configuration_Register_Base+I2C1_Controller_Configuration_Register_Offset)))

//I2C Controller Bus Monitor
#define I2C1_Controller_Bus_Monitor_Register_Base 0x400F2000
#define I2C1_Controller_Bus_Monitor_Register_Offset 0x00001234
#define I2C1_Controller_Bus_Monitor_Register (*((volatile uint32_t)(I2C1_Controller_Bus_Monitor_Register_Base+I2C1_Controller_Bus_Monitor_Register_Offset)))

//I2C Controller FIFO Control
#define I2C1_Controller_FIFO_Control_Register_Base 0x400F2000
#define I2C1_Controller_FIFO_Control_Register_Offset 0x00001238
#define I2C1_Controller_FIFO_Control_Register (*((volatile uint32_t)(I2C1_Controller_FIFO_Control_Register_Base+I2C1_Controller_FIFO_Control_Register_Offset)))

//I2C Controller FIFO Status Register
#define I2C1_Controller_FIFO_Status_Register_Base 0x400F2000
#define I2C1_Controller_FIFO_Status_Register_Offset 0x0000123C
#define I2C1_Controller_FIFO_Status_Register (*((volatile uint32_t)(I2C1_Controller_FIFO_Status_Register_Base+I2C1_Controller_FIFO_Status_Register_Offset)))

//I2C Controller PEC control register
#define I2C1_Controller_PEC_control_register_Base 0x400F2000
#define I2C1_Controller_PEC_control_register_Offset 0x00001240
#define I2C1_Controller_PEC_control_register (*((volatile uint32_t)(I2C1_Controller_PEC_control_register_Base+I2C1_Controller_PEC_control_register_Offset)))

//I2C Controller PEC status register
#define I2C1_Controller_PEC_status_register_Base 0x400F2000
#define I2C1_Controller_PEC_status_register_Offset 0x00001244
#define I2C1_Controller_PEC_status_register (*((volatile uint32_t)(I2C1_Controller_PEC_status_register_Base+I2C1_Controller_PEC_status_register_Offset)))

//I2C Target Own Address
#define I2C1_I2C_Target_Own_Address_register_Base 0x400F2000
#define I2C1_I2C_Target_Own_Address_register_Offset 0x00001250
#define I2C1_I2C_Target_Own_Address_register (*((volatile uint32_t)(I2C1_I2C_Target_Own_Address_register_Base+I2C1_I2C_Target_Own_Address_register_Offset)))

//I2C Target Own Address 2
#define I2C1_Target_Own_Address_2_register_Base 0x400F2000
#define I2C1_Target_Own_Address_2_register_Offset 0x00001254
#define I2C1_Target_Own_Address_2_register (*((volatile uint32_t)(I2C1_Target_Own_Address_2_register_Base+I2C1_Target_Own_Address_2_register_Offset)))

//I2C Target Control Register
#define I2C1_Target_Control_Register_Base 0x400F2000
#define I2C1_Target_Control_Register_Offset 0x00001258
#define I2C1_Target_Control_Register (*((volatile uint32_t)(I2C1_Target_Control_Register_Base+I2C1_Target_Control_Register_Offset)))

//I2C Target Status Register
#define I2C1_Target_Status_Register_Base 0x400F2000
#define I2C1_Target_status_Register_Offset 0x0000125C
#define I2C1_Target_Status_Register (*((volatile uint32_t)(I2C1_Target_Status_Register_Base+I2C1_Target_status_Register_Offset)))

//I2C Target RXData
#define I2C1_Target_RXData_Register_Base 0x400F2000
#define I2C1_Target_RXData_Register_Offset 0x00001260
#define I2C1_Target_RXData_Register (*((volatile uint32_t)(I2C1_Target_RXData_Register_Base+I2C1_Target_RXData_Register_Offset)))

//I2C Target TXData
#define I2C1_Target_TXData_Register_Base 0x400F2000
#define I2C1_Target_TXData_Register_Offset 0x00001264
#define I2C1_Target_TXData_Register (*((volatile uint32_t)(I2C1_Target_TXData_Register_Base+I2C1_Target_TXData_Register_Offset)))

//I2C Target ACK Control
#define I2C1_Target_ACK_Control_Register_Base 0x400F2000
#define I2C1_Target_ACK_Control_Register_Offset 0x00001268
#define I2C1_Target_ACK_Control_Register (*((volatile uint32_t)(I2C1_Target_ACK_Control_Register_Base+I2C1_Target_ACK_Control_Register_Offset)))

//I2C Target FIFO Control
#define I2C1_Target_FIFO_Control_Register_Base 0x400F2000
#define I2C1_Target_FIFO_Control_Register_Offset 0x0000126C
#define I2C1_Target_FIFO_Control_Register (*((volatile uint32_t)(I2C1_Target_FIFO_Control_Register_Base+I2C1_Target_FIFO_Control_Register_Offset)))

//I2C Target FIFO Status Register
#define I2C1_Target_FIFO_Status_Register_Base 0x400F2000
#define I2C1_Target_FIFO_Status_Register_Offset 0x00001270
#define I2C1_Target_FIFO_Status_Register (*((volatile uint32_t)(I2C1_Target_FIFO_Status_Register_Base+I2C1_Target_FIFO_Status_Register_Offset)))

//I2C Target PEC control register
#define I2C1_Target_PEC_control_register_Base 0x400F2000
#define I2C1_Target_PEC_control_register_Offset 0x00001274
#define I2C1_Target_PEC_control_register (*((volatile uint32_t)(I2C1_Target_PEC_control_register_Base+I2C1_Target_PEC_control_register_Offset)))

//I2C Target PEC status register
#define I2C1_Target_PEC_status_register_Base 0x400F2000
#define I2C1_Target_PEC_status_register_Offset 0x00001278
#define I2C1_Target_PEC_status_register (*((volatile uint32_t)(I2C1_Target_PEC_status_register_Base+I2C1_Target_PEC_status_register_Offset)))

/*-------------------------------------------------配置宏-------------------------------------------------*/
//I2Cx_Power_enable_Register
//Enable the power Notice:KEY must be set to 26h to write to this bit.
#define I2Cx_Power_enable_Register_Enable_Power 0x00000001
//KEY to allow Power State Change 26h = KEY to allow write access to this register
#define I2Cx_Power_enable_Register_KEY_to_allow_Power_State_Change 0x26000000

//I2Cx_Reset_Control_Register
//Assert reset to the peripheral Notice:KEY must be set to B1h to write to this bit.
#define I2Cx_Reset_Control_Register_Assert_reset 0x00000001
//Clear the RESETSTKY bit in the STAT register Notice:KEY must be set to B1h to write to this bit.
#define I2Cx_Reset_Control_Register_Clear_reset_sticky_bit 0x00000002
//Unlock key.B1h = KEY to allow write access to this register
#define I2Cx_Reset_Control_Register_Unlock_key 0xB1000000

//I2Cx_Peripheral_Clock_Configuration_Register
//Async Clock Request is blocked from starting SYSOSC or forcing bus clock to 32MHz
#define I2Cx_Peripheral_Clock_Configuration_Register_Block_async_clock_request 0x00000100
//KEY to Allow State Change -- 0xA9 A9h = key value to allow change field of GPRCM
#define I2Cx_Peripheral_Clock_Configuration_Register_KEY_to_Allow_State_Change 0xA9000000 

//I2Cx_peripheral_enable_and_reset_status_Register
//This bit indicates, if the peripheral was reset
#define I2Cx_peripheral_enable_and_reset_status_Register_The_peripheral_was_reset 0x00010000

//I2Cx_Clock_Divider_Register
//Selects divide ratio of module clock
#define I2Cx_Clock_Divider_Register_Do_not_divide_clock_source 0x00000000
#define I2Cx_Clock_Divider_Register_Divide_clock_source_by_2 0x00000001
#define I2Cx_Clock_Divider_Register_Divide_clock_source_by_3 0x00000002
#define I2Cx_Clock_Divider_Register_Divide_clock_source_by_4 0x00000003
#define I2Cx_Clock_Divider_Register_Divide_clock_source_by_5 0x00000004
#define I2Cx_Clock_Divider_Register_Divide_clock_source_by_6 0x00000005
#define I2Cx_Clock_Divider_Register_Divide_clock_source_by_7 0x00000006
#define I2Cx_Clock_Divider_Register_Divide_clock_source_by_8 0x00000007

//I2Cx_Clock_Select_for_Ultra_Low_Power_peripherals_Register
//Selects MFCLK as clock source if enabled
#define I2Cx_Clock_Select_for_Ultra_Low_Power_peripherals_Register_Select_this_clock_as_a_source 0x00000004
//Selects BUSCLK as clock source if enabled
#define I2Cx_Clock_Select_for_Ultra_Low_Power_peripherals_Register_Select_this_clock_as_a_source 0x00000008

//I2Cx_Peripheral_Debug_Control_Register
//Free run control
#define I2Cx_Peripheral_Debug_Control_Register_ignores_the_Core_Halted_input 0x00000001
//Soft halt boundary control
#define I2Cx_Peripheral_Debug_Control_Register_blocks_the_debug_freeze 0x00000002

//I2Cx_Event_Mode_Register
//Event line mode select for event corresponding to none
#define I2Cx_Event_Mode_Register_CPU_INT_interrupt_or_event_line_is_disabled 0x00000000
#define I2Cx_Event_Mode_Register_CPU_INT_interrupt_or_event_line_is_in_software_mode 0x00000001
#define I2Cx_Event_Mode_Register_CPU_INT_interrupt_or_event_line_is_in_hardware_mode 0x00000002
//Event line mode select for event corresponding to none
#define I2Cx_Event_Mode_Register_DMA_TRIG1_interrupt_or_event_line_is_disabled 0x00000000
#define I2Cx_Event_Mode_Register_DMA_TRIG1_interrupt_or_event_line_is_in_software_mode 0x00000004
#define I2Cx_Event_Mode_Register_DMA_TRIG1_interrupt_or_event_line_is_in_hardware_mode 0x00000008
//Event line mode select for event corresponding to none
#define I2Cx_Event_Mode_Register_DMA_TRIG0_interrupt_or_event_line_is_disabled 0x00000000
#define I2Cx_Event_Mode_Register_DMA_TRIG0_interrupt_or_event_line_is_in_software_mode 0x00000010
#define I2Cx_Event_Mode_Register_DMA_TRIG0_interrupt_or_event_line_is_in_hardware_mode 0x00000020

//I2Cx_Interrupt_control_register
//Writing a 1 to this field re-evaluates the interrupt sources
#define I2Cx_Interrupt_control_register_The_interrupt_or_event_line_is_in_software_mode 0x00000001

//I2Cx_Module_Description_register
//Minor rev of the IP bit3-bit0
//Major rev of the IP bit7-bit4
//Instance Number within the device bit11-bit8
//Feature Set for the module *instance* bit15-bit12
//Module identification contains a unique peripheral identification number bit31-bit16

//I2Cx_Glitch_Filter_Control_Register
//Glitch Suppression Pulse Width
#define I2Cx_Glitch_Filter_Control_Register_Glitch_Suppression_Pulse_Width_Bypass 0x00000000
#define I2Cx_Glitch_Filter_Control_Register_Glitch_Suppression_Pulse_Width_1_clock 0x00000001
#define I2Cx_Glitch_Filter_Control_Register_Glitch_Suppression_Pulse_Width_2_clock 0x00000002
#define I2Cx_Glitch_Filter_Control_Register_Glitch_Suppression_Pulse_Width_3_clock 0x00000003
#define I2Cx_Glitch_Filter_Control_Register_Glitch_Suppression_Pulse_Width_4_clock 0x00000004
#define I2Cx_Glitch_Filter_Control_Register_Glitch_Suppression_Pulse_Width_8_clock 0x00000005
#define I2Cx_Glitch_Filter_Control_Register_Glitch_Suppression_Pulse_Width_16_clock 0x00000006
#define I2Cx_Glitch_Filter_Control_Register_Glitch_Suppression_Pulse_Width_31_clock  0x00000007
//Analog Glitch Suppression Enable
#define I2Cx_Glitch_Filter_Control_Register_Analog_Glitch_Suppression_Enable 0x00000100
//Analog Glitch Suppression Pulse Width
#define I2Cx_Glitch_Filter_Control_Register_Pulses_shorter_then_5ns_length_are_filtered 0x00000000
#define I2Cx_Glitch_Filter_Control_Register_Pulses_shorter_then_10ns_length_are_filtered 0x00000200
#define I2Cx_Glitch_Filter_Control_Register_Pulses_shorter_then_25ns_length_are_filtered 0x00000400
#define I2Cx_Glitch_Filter_Control_Register_Pulses_shorter_then_50ns_length_are_filtered 0x00000600
//Analog and digital noise filters chaining enable
#define I2Cx_Glitch_Filter_Control_Register_analog_and_digital_glitch_filters_are_chained 0x00000800

//I2Cx_Timeout_Count_Control_Register
//Timeout counter A load value bit7-bit0
//Timeout Counter A Enable
#define I2Cx_Timeout_Count_Control_Register_Enable_Timeout_Counter_A 0x00008000
//Timeout Count B Load: Counter B is used for SCL High Detection bit32-bit16
//Timeout Counter B Enable
#define I2Cx_Timeout_Count_Control_Register_Enable_Timeout_Counter_B 0x80000000

//I2Cx_Timeout_Count_Register
//Timeout Count A Current Count bit7-bit0
//Timeout Count B Current Count bit32-bit16

//I2Cx_Controller_Target_Address_Register
//Receive/Send
#define I2Cx_Controller_Target_Address_Register_Controller_is_in_receive_mode 0x00000001
//I2C Target Address bit10-bit1
//This bit selects the adressing mode to be used in Controller mode
#define I2Cx_Controller_Target_Address_Register_10_bit_addressing_mode 0x00008000

//I2Cx_Controller_Control_Register
//I2C Controller Enable and start transaction
#define I2Cx_Controller_Control_Register_I2C_Controller_Enable_and_start_transaction 0x00000001
//Generate START
#define I2Cx_Controller_Control_Register_Generate_START 0x00000002
//Generate STOP
#define I2Cx_Controller_Control_Register_Generate_STOP 0x00000004
//Data Acknowledge Enable
#define I2Cx_Controller_Control_Register_Data_Acknowledge_Enable 0x00000008
//Controller ACK overrride Enable
#define I2Cx_Controller_Control_Register_Controller_ACK_overrride_Enable 0x00000010
//Read on TX Empty
#define I2Cx_Controller_Control_Register_Read_on_TX_Empty 0x00000020
// I2C transaction length bit27-bit16

//I2Cx_Controller_Status_Register
//I2C Controller FSM Busy
#define I2Cx_Controller_Status_Register_The_controller_is_busy 0x00000001
//Error
#define I2Cx_Controller_Status_Register_Error 0x00000002
//Acknowledge Address
#define I2Cx_Controller_Status_Register_transmitted_address_was_not_acknowledged 0x00000004
//Acknowledge Data
#define I2Cx_Controller_Status_Register_transmitted_data_was_not acknowledged 0x00000008
//Arbitration Lost
#define I2Cx_Controller_Status_Register_I2C_controller_lost_arbitration 0x00000010
//I2C Idle
#define I2Cx_Controller_Status_Register_I2C_controller_is_idle 0x00000020
//I2C Bus is Busy
#define I2Cx_Controller_Status_Register_I2C_Bus_is_Busy 0x00000040
//I2C Controller Transaction Count bit27-bit16

//I2Cx_Controller_RXData
//Received Data bit7-bit0

//I2Cx_I2C_Controller_TXData_Register
//Transmit Data bit7-bit0

//I2Cx_Controller_Timer_Period_Register
//Timer Period - This field is used in the equation to configure SCL_PERIOD bit6-bit0

//I2Cx_Controller_Configuration_Register
//Device Active After this bit has been set
#define I2Cx_Controller_Configuration_Register_Enables_the_I2C_Controller_operation 0x00000001
//MultiController mode
#define I2Cx_Controller_Configuration_Register_Enable_MultiController_mode 0x00000002
//Clock Stretching
#define I2Cx_Controller_Configuration_Register_Enables_clock_stretching_detection 0x00000004
//I2C Loopback
#define I2Cx_Controller_Configuration_Register_controller_in_a_test_mode_loopback_configuration 0x00000100

//I2Cx_Controller_Bus_Monitor_Register
//I2C SCL Status
#define I2Cx_Controller_Bus_Monitor_Register_The_I2CSCL_signal_is_high 0x00000001
//I2C SDA Status
#define I2Cx_Controller_Bus_Monitor_Register_The_I2CSDA_signal_is_high 0x00000002

//I2Cx_Controller_FIFO_Control_Register
//TX FIFO Trigger
#define I2Cx_Controller_FIFO_Control_Register_Trigger_when_the_TX_FIFO_is_empty 0x00000000
#define I2Cx_Controller_FIFO_Control_Register_Trigger_when_TX_FIFO_contains_less_than_1_byte 0x00000001
#define I2Cx_Controller_FIFO_Control_Register_Trigger_when_TX_FIFO_contains_less_than_2_byte 0x00000002
#define I2Cx_Controller_FIFO_Control_Register_Trigger_when_TX_FIFO_contains_less_than_3_byte 0x00000003
#define I2Cx_Controller_FIFO_Control_Register_Trigger_when_TX_FIFO_contains_less_than_4_byte 0x00000004
#define I2Cx_Controller_FIFO_Control_Register_Trigger_when_TX_FIFO_contains_less_than_5_byte 0x00000005
#define I2Cx_Controller_FIFO_Control_Register_Trigger_when_TX_FIFO_contains_less_than_6_byte 0x00000006
#define I2Cx_Controller_FIFO_Control_Register_Trigger_when_TX_FIFO_contains_less_than_7_byte 0x00000007
//TX FIFO Flush
#define I2Cx_Controller_FIFO_Control_Register_TX_FIFO_Flush_Flush_FIFO 0x00000080
//RX FIFO Trigger
#define I2Cx_Controller_FIFO_Control_Register_Trigger_when_RX_FIFO_contains_lager_than_1_byte 0x00000000
#define I2Cx_Controller_FIFO_Control_Register_Trigger_when_RX_FIFO_contains_lager_than_2_byte 0x00000001
#define I2Cx_Controller_FIFO_Control_Register_Trigger_when_RX_FIFO_contains_lager_than_3_byte 0x00000002
#define I2Cx_Controller_FIFO_Control_Register_Trigger_when_RX_FIFO_contains_lager_than_4_byte 0x00000003
#define I2Cx_Controller_FIFO_Control_Register_Trigger_when_RX_FIFO_contains_lager_than_5_byte 0x00000004
#define I2Cx_Controller_FIFO_Control_Register_Trigger_when_RX_FIFO_contains_lager_than_6_byte 0x00000005
#define I2Cx_Controller_FIFO_Control_Register_Trigger_when_RX_FIFO_contains_lager_than_7_byte 0x00000006
#define I2Cx_Controller_FIFO_Control_Register_Trigger_when_RX_FIFO_contains_lager_than_8_byte 0x00000007
//RX FIFO Flush
#define I2Cx_Controller_FIFO_Control_Register_RX_FIFO_Flush_Flush_FIFO 0x00008000

//I2Cx_Controller_FIFO_Status_Register
//Number of Bytes which could be read from the RX FIFO bit3-bit0
//RX FIFO Flush
#define I2Cx_Controller_FIFO_Status_Register_RX_FIFO_Flush_FIFO_Flush_active 0x00000080
//Number of Bytes which could be put into the TX FIFO bit11-bit8
//TX FIFO Flush
#define I2Cx_Controller_FIFO_Status_Register_TX_FIFO_Flush_FIFO_Flush_active 0x00008000

//I2Cx_Controller_PEC_control_register
//PEC Count bit8-bit0
//PEC Enable
#define I2Cx_Controller_PEC_control_register_PEC_Enable 0x00001000

//I2Cx_Controller_PEC_status_register
//PEC Byte Count bit9-bit0
//This status bit indicates if the PEC was checked in the transaction that occurred before the last Stop. Latched on Stop
#define I2Cx_Controller_PEC_status_register_PEC_was_checked 0x00010000
//This status bit indicates if a PEC check error occurred in the transaction that occurred before the last Stop
#define I2Cx_Controller_PEC_status_register_PEC_check_error 0x00020000

//I2Cx_Target_Own_Address_register
//I2C Target Own Address bit9-bit0
//I2C Target Own Address Enable
#define I2Cx_Target_Own_Address_register_Enable_OAR_address 0x00004000
//This bit selects the adressing mode to be used in Target mode
#define I2Cx_Target_Own_Address_register_Enable_10_bit_addressing 0x00008000

//I2Cx_Target_Own_Address_2_register
//I2C Target Own Address 2 bit6-bit0
//I2C Target Own Address 2 Enable
#define I2Cx_Target_Own_Address_2_register_Enables_the_use_of_the_alternate_address_in_the_OAR2_field 0x00000080
//I2C Target Own Address 2 Mask bit22-bit16

//I2Cx_Target_Control_Register
//Device Active. Setting this bit enables the Target functionality
#define I2Cx_Target_Control_Register_Enables_the_I2C_Target_operation 0x00000001
//General call response enable
#define I2Cx_Target_Control_Register_General_call_response_enable 0x00000002
//Target Clock Stretch Enable
#define I2Cx_Target_Control_Register_Target_Clock_Stretch_Enable 0x00000004
//Tx Empty Interrupt on TREQ
#define I2Cx_Target_Control_Register_Tx_Empty_Interrupt_on_TREQ 0x00000008
//Tx Trigger when Target FSM is in Tx Mode
#define I2Cx_Target_Control_Register_Tx_Trigger_when_Target_FSM_is_in_Tx_Mode 0x00000010
//Tx transfer waits when stale data in Tx FIFO
#define I2Cx_Target_Control_Register_Tx_transfer_waits_when_stale_data_in_Tx_FIFO 0x00000020
//Rx full interrupt generated on RREQ condition as indicated in SSR
#define I2Cx_Target_Control_Register_Rx_full_interrupt_generated_on_RREQ_condition 0x00000040
//Enable Default Host Address
#define I2Cx_Target_Control_Register_Enable_Default_Host_Address 0x00000080
//Enable Alert Response Address
#define I2Cx_Target_Control_Register_Enable_Alert_Response_Address 0x00000100
//Enable Deault device address
#define I2Cx_Target_Control_Register_Enable_Deault_device_address 0x00000200
//Target Wakeup Enable
#define I2Cx_Target_Control_Register_Target_Wakeup_Enable 0x00000400

//I2Cx_Target_Status_Register
//Receive Request
#define I2Cx_Target_Status_Register_Receive_Request 0x00000001
//Transmit Request
#define I2Cx_Target_Status_Register_Transmit_Request 0x00000002
//Target FSM is in Rx MODE
#define I2Cx_Target_Status_Register_Target_FSM_is_in_Rx_MODE 0x00000004
//OAR2 Address Matched
#define I2Cx_Target_Status_Register_OAR2_Address_Matched 0x00000008
//Quick Command Status
#define I2Cx_Target_Status_Register_Quick_Command_Status 0x00000010
//Quick Command Read / Write
#define I2Cx_Target_Status_Register_Quick_command_was_a_read 0x00000020
//I2C bus is busy
#define I2Cx_Target_Status_Register_I2C_bus_is_busy 0x00000040
//Target FSM is in TX MODE
#define I2Cx_Target_Status_Register_Target_FSM_is_in_TX_MODE 0x00000080
//Stale Tx FIFO
#define I2Cx_Target_Status_Register_TX_FIFO_is_stale 0x00000100
//Indicates the address for which Target address match happened bit18-bit9

//I2Cx_Target_RXData_Register
//Received Data bit7-bit0

//I2Cx_Target_TXData_Register
//Transmit Data

//I2Cx_Target_ACK_Control_Register
//I2C Target ACK Override Enable
#define I2Cx_Target_ACK_Control_Register_I2C_Target_ACK_Override_Enable 0x00000001
//I2C Target ACK Override Value
#define I2Cx_Target_ACK_Control_Register_A_NACK_is_sent_indicating_invalid_data_or_command 0x00000002
//When set this bit will automatically turn on the Target ACKOEN field following a Start Condition
#define I2Cx_Target_ACK_Control_Register_automatically_turn_on_the_Target_ACKOEN_field_following_a_Start_Condition 0x00000004
//When set this bit will automatically turn on the Target ACKOEN field
#define I2Cx_Target_ACK_Control_Register_automatically_turn_on_the_Target_ACKOEN_field_following_the_ACK_or_NACK_received_just_prior_to_the_PEC_byte 0x00000008
//When set this bit will automatically turn on the Target ACKOEN field
#define I2Cx_Target_ACK_Control_Register_automatically_turn_on_the_Target_ACKOEN_field_following_the_ACK_or_NACK_of_the_received_PEC_byte 0x00000010

//I2Cx_Target_FIFO_Control_Register
//TX FIFO Trigger Indicates at what fill level in the TX FIFO a trigger will be generated
#define I2Cx_Target_FIFO_Control_Register_Trigger_when_TX_FIFO_contains_less_than_4_byte 0x00000004
#define I2Cx_Target_FIFO_Control_Register_Trigger_when_TX_FIFO_contains_less_than_5_byte 0x00000005
#define I2Cx_Target_FIFO_Control_Register_Trigger_when_TX_FIFO_contains_less_than_6_byte 0x00000006
#define I2Cx_Target_FIFO_Control_Register_Trigger_when_TX_FIFO_contains_less_than_7_byte 0x00000007
//TX FIFO Flush Setting this bit will Flush the TX FIFO.
#define I2Cx_Target_FIFO_Control_Register_TX_FIFO_Flush_Flush_FIFO 0x00000080
//RX FIFO Trigger Indicates at what fill level in the RX FIFO a trigger will be generated
#define I2Cx_Target_FIFO_Control_Register_Trigger_when_RX_FIFO_contains_large_than_5_byte 0x00000400
#define I2Cx_Target_FIFO_Control_Register_Trigger_when_RX_FIFO_contains_large_than_6_byte 0x00000500
#define I2Cx_Target_FIFO_Control_Register_Trigger_when_RX_FIFO_contains_large_than_7_byte 0x00000600
#define I2Cx_Target_FIFO_Control_Register_Trigger_when_RX_FIFO_contains_large_than_8_byte 0x00000700
//RX FIFO Flush Setting this bit will Flush the RX FIFO.
#define I2Cx_Target_FIFO_Control_Register_RX_FIFO_Flush_Flush_FIFO 0x00008000

//I2Cx_Target_FIFO_Status_Register
//Number of Bytes which could be read from the RX FIFO bit3-bit0
//RX FIFO Flush
#define I2Cx_Target_FIFO_Status_Register_RX_FIFO_Flush_FIFO_Flush_active 0x00000080
//Number of Bytes which could be put into the TX FIFO bit11-bit8
//TX FIFO Flush
#define I2Cx_Target_FIFO_Status_Register_TX_FIFO_Flush_FIFO_Flush_active 0x00008000

//I2Cx_Target_PEC_control_register
// When this field is non zero, the number of I2C data bytes are counted bit8-bit0
//PEC Enable
#define I2Cx_Target_PEC_control_register_PEC_transmission_and_check_is_enabled 0x00001000

//I2Cx_Target_PEC_status_register
//This is the current PEC Byte Count of the Target State Machine bit8-bit0
//This status bit indicates if the PEC was checked in the transaction that occurred before the last Stop. Latched on Stop
#define I2Cx_Target_PEC_status_register_PEC_was_checked_in_the_transaction 0x00010000
//This status bit indicates if a PEC check error occurred in the transaction
#define I2Cx_Target_PEC_status_register_PEC_check_error_occurred_in_the_transaction 0x00020000

#endif
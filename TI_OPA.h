//Designer:Stephen
//For TI_MSPM0G3507
#ifndef TI_OPA_h
#define TI_OPA_h
//标准字长头文件引用
#include"stdint.h"
/*-------------------OPA0---------------------*/
//Power enable
#define OPA0_Power_enable_Register_Base 0x40020000
#define OPA0_Power_enable_Register_Offset 0x00000800
#define OPA0_Power_enable_Register (*((volatile uint32_t)(OPA0_Power_enable_Register_Base+OPA0_Power_enable_Register_Offset)))

//Reset Control
#define OPA0_Reset_Control_Register_Base 0x40020000
#define OPA0_Reset_Control_Register_Offset 0x00000804
#define OPA0_Reset_Control_Register (*((volatile uint32_t)(OPA0_Reset_Control_Register_Base+OPA0_Reset_Control_Register_Offset)))

//peripheral enable and reset status
#define OPA0_peripheral_enable_and_reset_status_Register_Base 0x40020000
#define OPA0_peripheral_enable_and_reset_status_Register_Offset 0x00000814
#define OPA0_peripheral_enable_and_reset_status_Register (*((volatile uint32_t)(OPA0_peripheral_enable_and_reset_status_Register_Base+OPA0_peripheral_enable_and_reset_status_Register_Offset)))

//Clock Override
#define OPA0_Clock_Override_Register_Base 0x40020000
#define OPA0_Clock_Override_Register_Offset 0x00001010
#define OPA0_Clock_Override_Register (*((volatile uint32_t)(OPA0_Clock_Override_Register_Base+OPA0_Clock_Override_Register_Offset)))

//Power Control
#define OPA0_Power_Control_Register_Base 0x40020000
#define OPA0_Power_Control_Register_Offset 0x0000101C
#define OPA0_Power_Control_Register (*((volatile uint32_t)(OPA0_Power_Control_Register_Base+OPA0_Power_Control_Register_Offset)))

//Control Register
#define OPA0_Control_Register_Base 0x40020000
#define OPA0_Control_Register_Offset 0x00001100
#define OPA0_Control_Register (*((volatile uint32_t)(OPA0_Control_Register_Base+OPA0_Control_Register_Offset)))

//Configuration Register
#define OPA0_Configuration_Register_Base 0x40020000
#define OPA0_Configuration_Register_Offset 0x00001108
#define OPA0_Configuration_Register (*((volatile uint32_t)(OPA0_Configuration_Register_Base+OPA0_Configuration_Register_Offset)))

//Status Register
#define OPA0_Status_Register_Base 0x40020000
#define OPA0_Status_Register_Offset 0x00001118
#define OPA0_Status_Register (*((volatile uint32_t)(OPA0_Status_Register_Base+OPA0_Status_Register_Offset)))

/*-------------------OPA1---------------------*/
//Power enable
#define OPA1_Power_enable_Register_Base 0x40022000
#define OPA1_Power_enable_Register_Offset 0x00000800
#define OPA1_Power_enable_Register (*((volatile uint32_t)(OPA1_Power_enable_Register_Base+OPA1_Power_enable_Register_Offset)))

//Reset Control
#define OPA1_Reset_Control_Register_Base 0x40022000
#define OPA1_Reset_Control_Register_Offset 0x00000804
#define OPA1_Reset_Control_Register (*((volatile uint32_t)(OPA1_Reset_Control_Register_Base+OPA1_Reset_Control_Register_Offset)))

//peripheral enable and reset status
#define OPA1_peripheral_enable_and_reset_status_Register_Base 0x40022000
#define OPA1_peripheral_enable_and_reset_status_Register_Offset 0x00000814
#define OPA1_peripheral_enable_and_reset_status_Register (*((volatile uint32_t)(OPA1_peripheral_enable_and_reset_status_Register_Base+OPA1_peripheral_enable_and_reset_status_Register_Offset)))

//Clock Override
#define OPA1_Clock_Override_Register_Base 0x40022000
#define OPA1_Clock_Override_Register_Offset 0x00001010
#define OPA1_Clock_Override_Register (*((volatile uint32_t)(OPA1_Clock_Override_Register_Base+OPA1_Clock_Override_Register_Offset)))

//Power Control
#define OPA1_Power_Control_Register_Base 0x40022000
#define OPA1_Power_Control_Register_Offset 0x0000101C
#define OPA1_Power_Control_Register (*((volatile uint32_t)(OPA1_Power_Control_Register_Base+OPA1_Power_Control_Register_Offset)))

//Control Register
#define OPA1_Control_Register_Base 0x40022000
#define OPA1_Control_Register_Offset 0x00001100
#define OPA1_Control_Register (*((volatile uint32_t)(OPA1_Control_Register_Base+OPA1_Control_Register_Offset)))

//Configuration Register
#define OPA1_Configuration_Register_Base 0x40022000
#define OPA1_Configuration_Register_Offset 0x00001108
#define OPA1_Configuration_Register (*((volatile uint32_t)(OPA1_Configuration_Register_Base+OPA1_Configuration_Register_Offset)))

//Status Register
#define OPA1_Status_Register_Base 0x40022000
#define OPA1_Status_Register_Offset 0x00001118
#define OPA1_Status_Register (*((volatile uint32_t)(OPA1_Status_Register_Base+OPA1_Status_Register_Offset)))

//控制宏
//OPAx_Power_enable_Register
//Enable the power Notice:KEY must be set to 26h to write to this bit
#define OPAx_Power_enable_Register_Enable_Power 0x00000001
//26h = KEY to allow write access to this register
#define OPAx_Power_enable_Register_KEY_to_allow_Power_State_Change 0x26000000

//OPAx_Reset_Control_Register
//Assert reset to the peripheral Notice:KEY must be set to B1h to write to this bit.
#define OPAx_Reset_Control_Register_Assert_reset 0x00000001
//Clear the RESETSTKY bit in the STAT register Notice:KEY must be set to B1h to write to this bit.
#define OPAx_Reset_Control_Register_Clear_reset_sticky_bit 0x00000002
//B1h = KEY to allow write access to this register
#define OPAx_Reset_Control_Register_Unlock_key 0xB1000000

//OPAx_peripheral_enable_and_reset_status_Register
//This bit indicates, if the peripheral was reset
#define OPAx_peripheral_enable_and_reset_status_Register_The_peripheral_was_reset 0x00010000

//OPAx_Clock_Override_Register
//Unlocks the functionality of RUN_STOP to override the automatic peripheral clock request
#define OPAx_Clock_Override_Register_Override_enabled 0x00000001
// If OVERRIDE is enabled, this register is used to manually control the peripheral's clock request to the system
#define OPAx_Clock_Override_Register_Stop_or_gate_functional_clock 0x00000002

//OPAx_Power_Control_Register
//When set the peripheral will remove its local IP “request for enable” so that it can be disabled if no other entities in the system are requesting it to be enabled.
#define OPAx_Power_Control_Register_Enable_automatic_power_off_function 0x00000001

//OPAx_Control_Register
//OAxn Enable
#define OPAx_Control_Register_OAxn_ON 0x00000001

//OPAx_Configuration_Register
//Chopping enable
#define OPAx_Configuration_Register_Chopping_disable 0x00000000
#define OPAx_Configuration_Register_Standard_chopping_enable 0x00000001
#define OPAx_Configuration_Register_Chop_with_post_average_on 0x00000002
//Enable output pin
#define OPAx_Configuration_Register_Output_pin_enabled 0x00000004
//Positive OA input selection
#define OPAx_Configuration_Register_Positive_OA_No_connect 0x00000000
#define OPAx_Configuration_Register_Positive_OA_external_pin_OA_Plus0 0x00000008
#define OPAx_Configuration_Register_Positive_OA_external_pin_OAn_Plus1 0x00000010
#define OPAx_Configuration_Register_Positive_OA_DAC12OUT 0x00000018
#define OPAx_Configuration_Register_Positive_OA_DAC8OUT 0x00000020
#define OPAx_Configuration_Register_Positive_OA_VREF_Channel 0x00000028
#define OPAx_Configuration_Register_Positive_OA_OA_n_Sub1_Rtop 0x00000030
#define OPAx_Configuration_Register_Positive_OA_GPAMP_OUT_INT_Input 0x00000038
#define OPAx_Configuration_Register_Positive_OA_Internal_Ground_Connection 0x00000040
//Negative OA input selection
#define OPAx_Configuration_Register_Negative_OA_no_connect 0x00000000
#define OPAx_Configuration_Register_Negative_OA_external_pin_OAn_0 0x00000080
#define OPAx_Configuration_Register_Negative_OA_external_pin_OAn_1 0x00000100
#define OPAx_Configuration_Register_Negative_OA_OA_n_plus1_Rbot 0x00000180
#define OPAx_Configuration_Register_Negative_OA_OA_n_Rtap 0x00000200
#define OPAx_Configuration_Register_Negative_OA_OA_n_Rtop 0x00000280
#define OPAx_Configuration_Register_Negative_OA_Spare_input 0x00000300
//MSEL Mux selection
#define OPAx_Configuration_Register_MSEL_Mux_selection_no_connect 0x00000000
#define OPAx_Configuration_Register_MSEL_Mux_selection_external_pin_OAn_sub_1 0x00000400
#define OPAx_Configuration_Register_MSEL_Mux_selection_VSS 0x00000800
#define OPAx_Configuration_Register_MSEL_Mux_selection_DAC12_Output 0x00000C00
#define OPAx_Configuration_Register_MSEL_Mux_selection_OA_n_sub_Rtop 0x00001000
//Gain setting. Refer to TRM for enumeration information bit15-bit13

//OPAx_Status_Register
//OA ready status
//状态宏
#define OPAx_Status_Register_OAxn_is_ready 0x00000001

#endif
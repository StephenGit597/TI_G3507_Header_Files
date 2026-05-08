//Designer:Stephen
//For TI_MSPM0G3507
#ifndef TI_DAC_h
#define TI_DAC_h
//标准字长头文件引用
#include"stdint.h"
// Power enable
#define DAC_Power_enable_Register_Base 0x40018000
#define DAC_Power_enable_Register_Offset 0x00000800
#define DAC_Power_enable_Register (*((volatile uint32_t)(DAC_Power_enable_Register_Base+DAC_Power_enable_Register_Offset)))
//控制宏
//Enable the power notice:KEY must be set to 26h to write to this bit
#define DAC_Power_enable_Register_Enable_the_power 0x00000001
// KEY to allow Power State Change:26h
#define DAC_Power_enable_Register_KEY_to_allow_Power_State_Change 0x26000000

//Reset Control
#define DAC_Reset_Control_Register_Base 0x40018000
#define DAC_Reset_Control_Register_Offset 0x00000804
#define DAC_Reset_Control_Register (*((volatile uint32_t)(DAC_Reset_Control_Register_Base+DAC_Reset_Control_Register_Offset)))
//控制宏
// Assert reset to the peripheral notice:KEY must be set to B1h to write to this bit.
#define DAC_Reset_Control_Register_Assert_reset 0x00000001 
// Clear the RESETSTKY bit in the STAT register notice:KEY must be set to B1h to write to this bit.
#define DAC_Reset_Control_Register_Clear_reset_sticky_bit 0x00000002
//B1h = KEY to allow write access to this register
#define DAC_Reset_Control_Register_Unlock_key 0xB1000000

//peripheral enable and reset status
#define DAC_peripheral_enable_and_reset_status_Register_Base 0x40018000
#define DAC_peripheral_enable_and_reset_status_Register_Offset 0x00000814
#define DAC_peripheral_enable_and_reset_status_Register (*((volatile uint32_t)(DAC_peripheral_enable_and_reset_status_Register_Base+DAC_peripheral_enable_and_reset_status_Register_Offset)))
//状态宏
// This bit indicates, if the peripheral was reset
#define DAC_peripheral_enable_and_reset_status_Register_The_peripheral_was_reset 0x00010000

// Event Mode
#define DAC_Event_Mode_Register_Base 0x40018000
#define DAC_Event_Mode_Register_Offset 0x000010E0
#define DAC_Event_Mode_Register (*((volatile uint32_t)(DAC_Event_Mode_Register_Base+DAC_Event_Mode_Register_Offset)))
//状态宏
//Event line mode select for event corresponding to none.CPU_INT
#define DAC_Event_Mode_Register_CPU_INT_The_interrupt_or_event_line_is_disabled 0x00000000
#define DAC_Event_Mode_Register_CPU_INT_Event_handled_by_software 0x00000001
#define DAC_Event_Mode_Register_CPU_INT_Event_handled_by_hardware 0x00000002
// Event line mode select for event corresponding to none.GEN_EVENT
#define DAC_Event_Mode_Register_GEN_EVENT_The_interrupt_or_event_line_is_disabled 0x00000000
#define DAC_Event_Mode_Register_GEN_EVENT_Event_handled_by_software 0x00000004
#define DAC_Event_Mode_Register_GEN_EVENT_Event_handled_by_hardware 0x00000008

// Module Description
#define DAC_Module_Description_Register_Base 0x40018000
#define DAC_Module_Description_Register_Offset 0x000010FC
#define DAC_Module_Description_Register (*((volatile uint32_t)(DAC_Module_Description_Register_Base+DAC_Module_Description_Register_Offset)))
//Minor rev of the IP bit3-bit0
//Major rev of the IP bit7-bit4
//Feature Set for the module *instance* bit15-bit12
//Module identification contains a unique peripheral identification number bit31-bit16

//Control 0 register
#define DAC_Control_0_register_Base 0x40018000
#define DAC_Control_0_register_Offset 0x00001100
#define DAC_Control_0_register (*((volatile uint32_t)(DAC_Control_0_register_Base+DAC_Control_0_register_Offset)))
//控制宏
//This bit enables the DAC module.
#define DAC_Control_0_register_Enable_DAC 0x00000001
//These bits define the DAC output voltage resolution
#define DAC_Control_0_register_8_bit_resolution 0x00000000
#define DAC_Control_0_register_12_bit_resolution 0x00000100
//This bit defines the DAC input data format.
#define DAC_Control_0_register_Straight_binary 0x00000000
#define DAC_Control_0_register_Twos_complement 0x00010000

//Control 1 register
#define DAC_Control_1_register_Base 0x40018000
#define DAC_Control_1_register_Offset 0x00001110
#define DAC_Control_1_register (*((volatile uint32_t)(DAC_Control_1_register_Base+DAC_Control_1_register_Offset)))
//控制宏
// AMP_EN - output amplifier enabled or disabled
#define DAC_Control_1_register_output_amplifier_enable 0x00000001
//AMPHIZ - amplifier output value
#define DAC_Control_1_register_amplifier_output_is_pulled_down_to_ground 0x00000002
//This bit selects the DAC voltage reference source + input
#define DAC_Control_1_register_VEREFP_pin_as_VR_Positive 0x00000100
// This bit selects the DAC voltage reference source + input
#define DAC_Control_1_register_VEREFP_pin_as_VR_Negative 0x00000200
//These bits select the DAC output on device pin
#define DAC_Control_1_register_OUT0_output_is_selected 0x01000000

//Control 2 register
#define DAC_Control_2_register_Base 0x40018000
#define DAC_Control_2_register_Offset 0x00001120
#define DAC_Control_2_register (*((volatile uint32_t)(DAC_Control_2_register_Base+DAC_Control_2_register_Offset)))
//控制宏
//This bit enables the FIFO and the FIFO hardware control state machine
#define DAC_Control_2_register_Enable_FIFO 0x00000001
//These bits determine the FIFO threshold
#define DAC_Control_2_register_One_fourth_of_the_FIFO_locations_are_empty 0x00000000
#define DAC_Control_2_register_Half_of_the_FIFO_locations_are_empty 0x00000100
#define DAC_Control_2_register_Three_fourth_of_the_FIFO_locations_are_empty 0x00000200
#define DAC_Control_2_register_Reserved_value 0x00000300
//These bits select the source for FIFO read trigger
#define DAC_Control_2_register_Sample_time_generator_output 0x00000000
#define DAC_Control_2_register_Hardware_trigger_0_from_event_fabric 0x00010000
//This bit enables the DMA trigger generation mechanism
#define DAC_Control_2_register_DMA_trigger_generation_mechanism_is_enabled 0x01000000

//Control 3 register
#define DAC_Control_3_register_Base 0x40018000
#define DAC_Control_3_register_Offset 0x00001130
#define DAC_Control_3_register (*((volatile uint32_t)(DAC_Control_3_register_Base+DAC_Control_3_register_Offset)))
//控制宏
//This bit enables the sample time generator
#define DAC_Control_3_register_Sample_time_generator_is_enabled 0x00000001
//These bits are used to configure the trigger rate from the sample time generator
#define DAC_Control_3_register_Trigger_rate_is_500_sps 0x00000000
#define DAC_Control_3_register_Trigger_rate_is_1_ksps 0x00000001
#define DAC_Control_3_register_Trigger_rate_is_2_ksps 0x00000002
#define DAC_Control_3_register_Trigger_rate_is_4_ksps 0x00000003
#define DAC_Control_3_register_Trigger_rate_is_8_ksps 0x00000004
#define DAC_Control_3_register_Trigger_rate_is_16_ksps 0x00000005
#define DAC_Control_3_register_Trigger_rate_is_100_ksps 0x00000006
#define DAC_Control_3_register_Trigger_rate_is_200_ksps 0x00000007
#define DAC_Control_3_register_Trigger_rate_is_500_ksps 0x00000008
#define DAC_Control_3_register_Trigger_rate_is_1_Msps 0x00000009

//Calibration control register
#define DAC_Calibration_control_register_Base 0x40018000
#define DAC_Calibration_control_register_Offset 0x00001140
#define DAC_Calibration_control_register (*((volatile uint32_t)(DAC_Calibration_control_register_Base+DAC_Calibration_control_register_Offset)))
//控制宏
// This bit when set initiates the DAC offset error calibration sequence and is automatically reset when the offset error calibration completes
#define DAC_Calibration_control_register_Initiate_offset_error_calibration_or_offset_error_calibration_is_already_in_progress 0x00000001
//This bit is used to select between factory trim or self calibration trim
#define DAC_Calibration_control_register_Self_Calibration_Trim 0x00000002

//Calibration data
#define DAC_Calibration_data_Register_Base 0x40018000
#define DAC_Calibration_data_Register_Offset 0x00001160
#define DAC_Calibration_data_Register (*((volatile uint32_t)(DAC_Calibration_data_Register_Base+DAC_Calibration_data_Register_Offset)))
//DATA bit6-bit0

//Data 0 register
#define DAC_Data_0_register_Base 0x40018000
#define DAC_Data_0_register_Offset 0x00001200
#define DAC_Data_0_register (*((volatile uint32_t)(DAC_Data_0_register_Base+DAC_Data_0_register_Offset)))
//This is the data written for digital to analog conversion bit11-bit0

#endif
//Designer:Stephen
//For TI_MSPM0G3507
#ifndef TI_TRNG_h
#define TI_TRNG_h
//标准字长头文件引用
#include"stdint.h"
//Power enable
#define TRNG_Power_enable_Register_Base 0x40446000
#define TRNG_Power_enable_Register_Offset 0x00000800
#define TRNG_Power_enable_Register (*((volatile uint32_t)(TRNG_Power_enable_Register_Base+TRNG_Power_enable_Register_Offset)))
//控制宏
// Enable the power notice:KEY must be set to 26h to write to this bit
#define TRNG_Power_enable_Register_Enable_Power 0x00000001
//KEY to allow Power State Change 26h = KEY to allow write access to this register
#define TRNG_Power_enable_Register_KEY_to_allow_Power_State_Change 0x26000000

//Reset Control Register
#define TRNG_Reset_Control_Register_Base 0x40446000
#define TRNG_Reset_Control_Register_Offset 0x00000804
#define TRNG_Reset_Control_Register (*((volatile uint32_t)(TRNG_Reset_Control_Register_Base+TRNG_Reset_Control_Register_Offset)))
//控制宏
// Assert reset to the peripheral Notice:KEY must be set to B1h to write to this bit.
#define TRNG_Reset_Control_Register_Assert_reset_to_the_peripheral 0x00000001
//Clear the RESETSTKY bit in the STAT register Notice:KEY must be set to B1h to write to this bit
#define TRNG_Reset_Control_Register_Clear_the_RESETSTKY_bit 0x00000002
//Unlock key B1h = KEY to allow write access to this register
#define TRNG_Reset_Control_Register_Unlock_key 0xB1000000

//peripheral enable and reset status
#define TRNG_peripheral_enable_and_reset_status_Register_Base 0x40446000
#define TRNG_peripheral_enable_and_reset_status_Register_Offset 0x00000814
#define TRNG_peripheral_enable_and_reset_status_Register (*((volatile uint32_t)(TRNG_peripheral_enable_and_reset_status_Register_Base+TRNG_peripheral_enable_and_reset_status_Register_Offset)))
//状态宏
// The peripheral was reset since the last bit clear
#define TRNG_peripheral_enable_and_reset_status_Register_The_periphera_was_reset 0x00010000

//Description Register
#define TRNG_Description_Register_Base 0x40446000
#define TRNG_Description_Register_Offset 0x000010FC
#define TRNG_Description_Register (*((volatile uint32_t)(TRNG_Description_Register_Base+TRNG_Description_Register_Offset)))
//Minor rev of the IP bit3-bit0
//Major rev of the IP bir7-bit4
//Instance Number within the device.bit11-bit8
//Feature Set for the module *instance* bit15-bit12
//Module Identifier - An internal TI page has been created to request unique module IDs bit31-bit16

//Control Register
#define RENG_Control_Register_Base 0x40446000
#define RENG_Control_Register_Offset 0x00001100
#define RENG_Control_Register (*((volatile uint32_t)(RENG_Control_Register_Base+RENG_Control_Register_Offset)))
//控制宏
//Sets the TRNG mode through a command
#define RENG_Control_Register_TRNG_mode_OFF 0x00000000
#define RENG_Control_Register_TRNG_mode_PWRUP_DIG 0x00000001
#define RENG_Control_Register_TRNG_mode_PWRUP_ANA 0x00000002
#define RENG_Control_Register_TRNG_mode_NORM_FUNC 0x00000003
//Set decimation rate. Decimate by n
#define RENG_Control_Register_Decimation_by_1 0x00000000
#define RENG_Control_Register_Decimation_by_2 0x00000100
#define RENG_Control_Register_Decimation_by_3 0x00000200
#define RENG_Control_Register_Decimation_by_4 0x00000300
#define RENG_Control_Register_Decimation_by_5 0x00000400
#define RENG_Control_Register_Decimation_by_6 0x00000500
#define RENG_Control_Register_Decimation_by_7 0x00000600
#define RENG_Control_Register_Decimation_by_8 0x00000700
//When '1', the power-up sequence takes twice as long
#define RENG_Control_Register_power_up_sequence_twice 0x00010000
// Configure PCHARGE sequence length
#define RENG_Control_Register_sequence_length_Disabled 0x00000000
#define RENG_Control_Register_sequence_length_20_us_PCHARGE 0x00020000
#define RENG_Control_Register_sequence_length_30_us_PCHARGE 0x00040000
#define RENG_Control_Register_sequence_length_40_us_PCHARGE 0x00060000
// Configure pulse startup sequence length
#define RENG_Control_Register_pulse_startup_sequence_length_Disabled 0x00000000
#define RENG_Control_Register_pulse_startup_sequence_length_rise_10us_fall_50us 0x00080000
#define RENG_Control_Register_pulse_startup_sequence_length_rise_10us_fall_70us 0x00100000
#define RENG_Control_Register_pulse_startup_sequence_length_rise_10us_fall_90us 0x00180000

//Status register
#define RENG_Status_register_Base 0x40446000
#define RENG_Status_register_offset 0x00001104
#define RENG_Status_register (*((volatile uint32_t)(RENG_Status_register_Base+RENG_Status_register_offset)))
//状态宏
// Indicates that the Adaptive Proportion Test (1,2,3, or 4-bit counters) failed by having too many or too few counted samples in the last 1024 bit window.
#define RENG_Status_register_Adaptive_Proportion_Test_FAIL 0x00000001
// Indicates that the repetition counter test caused the most recent failure
#define RENG_Status_register_repetition_counter_test_FAIL 0x00000002
// Indicates the last accepted command that is issued to the TRNG interface
#define RENG_Status_register_command_OFF 0x00000000
#define RENG_Status_register_command_PWRUP_DIG 0x00000100
#define RENG_Status_register_command_PWRUP_ANA 0x00000200
#define RENG_Status_register_command_NORM_FUNC 0x00000300
// Current state of the front end FSM
#define RENG_Status_register_Current_state_OFF 0x00000000
#define RENG_Status_register_Current_state_PWRUP_ES 0x00010000
#define RENG_Status_register_Current_state_NORM_FUNC 0x00030000
#define RENG_Status_register_Current_state_TEST_DIG 0x00070000
#define RENG_Status_register_Current_state_TEST_ANA 0x000B0000
#define RENG_Status_register_Current_state_ERROR 0x000A0000
#define RENG_Status_register_Current_state_ERROR 0x00020000

//Captured data
#define RENG_Captured_data_Register_Base 0x40446000
#define RENG_Captured_data_Register_offset 0x00001108
#define RENG_Captured_data_Register (*((volatile uint32_t)(RENG_Captured_data_Register_Base+RENG_Captured_data_Register_offset)))
//Captured data from decimation block

//Test Results Register
#define RENG_Test_Results_Register_Base 0x40446000
#define RENG_Test_Results_Register_Offset 0x0000110C
#define RENG_Test_Results_Register (*((volatile uint32_t)(RENG_Test_Results_Register_Base+RENG_Test_Results_Register_Offset)))
//状态宏
// Bit 0 indicates if the first decimation rate test and health test(verifies conditioning, decimation, and captured buffer) fails and Bit 1 indicates if the second decimation test and health test fails
#define RENG_Test_Results_Register_decim_test0 0x00000001
#define RENG_Test_Results_Register_decim_test1 0x00000002
#define RENG_Test_Results_Register_decim_test2 0x00000004
#define RENG_Test_Results_Register_decim_test3 0x00000008
#define RENG_Test_Results_Register_decim_test4 0x00000010
#define RENG_Test_Results_Register_decim_test5 0x00000020
#define RENG_Test_Results_Register_decim_test6 0x00000040
#define RENG_Test_Results_Register_decim_test7 0x00000080
//Runs through 4096 samples from an enabled entropy source and verifies that none of the health tests failed, indicating sufficient entropy was produced by the analog components

//Clock Divide Register
#define RENG_Clock_Divide_Register_Base 0x40446000
#define RENG_Clock_Divide_Register_Offset 0x00001110
#define RENG_Clock_Divide_Register (*((volatile uint32_t)(RENG_Clock_Divide_Register_Base+RENG_Clock_Divide_Register_Offset)))
//控制宏
//Selects divide ratio of module clock
#define RENG_Clock_Divide_Register_Do_not_divide_clock_source 0x00000000
#define RENG_Clock_Divide_Register_Divide clock source by 2 0x00000001
#define RENG_Clock_Divide_Register_Divide clock source by 4 0x00000003
#define RENG_Clock_Divide_Register_Divide clock source by 6 0x00000005
#define RENG_Clock_Divide_Register_Divide clock source by 8 0x00000007

#endif
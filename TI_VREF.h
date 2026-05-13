//Designer:Stephen
//For TI_MSPM0G3507
#ifndef TI_VREF_h
#define TI_VREF_h
//标准字长头文件引用
#include"stdint.h"
//Power enable
#define VREF_Power_enable_Register_Base 0x40030000
#define VREF_Power_enable_Register_Offset 0x00000800
#define VREF_Power_enable_Register (*((volatile uint32_t)(VREF_Power_enable_Register_Base+VREF_Power_enable_Register_Offset)))
//控制宏
//Enable the power notice:KEY must be set to 26h to write to this bit.
#define VREF_Power_enable_Register_Enable_Power 0x00000001
//KEY to allow Power State Change
#define VREF_Power_enable_Register_KEY_to_allow_write 0x26000000

//Reset Control
#define VREF_Reset_Control_Register_Base 0x40030000
#define VREF_Reset_Control_Register_Offset 0x00000804
#define VREF_Reset_Control_Register (*((volatile uint32_t)(VREF_Reset_Control_Register_Base+VREF_Reset_Control_Register_Offset)))
//控制宏
//Assert reset to the peripheral Notice:KEY must be set to B1h to write to this bit
#define VREF_Reset_Control_Register_Assert_reset 0x00000001
//Clear the RESETSTKY bit in the STAT register Notice:KEY must be set to B1h to write to this bit
#define VREF_Reset_Control_Register_Clear_reset_sticky_bit 0x00000002
//B1h = KEY to allow write access to this register
#define VREF_Reset_Control_Register_Unlock_key 0xB1000000

//peripheral enable and reset status
#define VREF_peripheral_enable_and_reset_status_Register_Base 0x40030000
#define VREF_peripheral_enable_and_reset_status_Register_Offset 0x00000814
#define VREF_peripheral_enable_and_reset_status_Register (*((volatile uint32_t)(VREF_peripheral_enable_and_reset_status_Register_Base+VREF_peripheral_enable_and_reset_status_Register_Offset)))
//标志宏
//This bit indicates, if the peripheral was reset
#define VREF_peripheral_enable_and_reset_status_Register_The_peripheral_was_reset

//Clock Divider
#define VREF_Clock_Divider_Register_Base 0x40030000
#define VREF_Clock_Divider_Register_Offset 0x00001000
#define VREF_Clock_Divider_Register (*((volatile uint32_t)(VREF_Clock_Divider_Register_Base+VREF_Clock_Divider_Register_Offset)))
//Selects divide ratio of module clock to be used in sample and hold logic

//Clock Selection
#define VREF_Clock_Selection_Register_Base 0x40030000
#define VREF_Clock_Selection_Register_Offset 0x00001008
#define VREF_Clock_Selection_Register (*((volatile uint32_t)(VREF_Clock_Selection_Register_Base+VREF_Clock_Selection_Register_Offset)))
//控制宏
//Selects LFCLK as clock source if enabled
#define VREF_Clock_Selection_Register_Selects_LFCLK_as_clock_source 0x00000002
//Selects MFCLK as clock source if enabled
#define VREF_Clock_Selection_Register_Selects_MFCLK_as_clock_source 0x00000004
//Selects BUSCLK as clock source if enabled
#define VREF_Clock_Selection_Register_Selects_BUSCLK_as_clock_source 0x00000008

//Control 0
#define VREF_Control_0_Register_Base 0x40030000
#define VREF_Control_0_Register_Offset 0x00001100
#define VREF_Control_0_Register (*((volatile uint32_t)(VREF_Control_0_Register_Base+VREF_Control_0_Register_Offset)))
//控制宏
//This bit enables the VREF reference buffer 0
#define VREF_Control_0_Register_Enbale_VREF_buffer_0 0x00000001
//This bit enables the VREF reference buffer 1
#define VREF_Control_0_Register_Enbale_VREF_buffer_1 0x00000002
//This bit enables the VREF reference buffer 2
#define VREF_Control_0_Register_Enbale_VREF_buffer_2 0x00000004
//These bits configure output buffer
#define VREF_Control_0_Register_output_1p4v 0x00000080
//This bit enable sample and hold mode
#define VREF_Control_0_Register_Sample_and_hold_mode_is_enable 0x00000100

//Control 1
#define VREF_Control_1_Register_Base 0x40030000
#define VREF_Control_1_Register_Offset 0x00001104
#define VREF_Control_1_Register (*((volatile uint32_t)(VREF_Control_1_Register_Base+VREF_Control_1_Register_Offset)))
//状态宏
//These bits defines status of VREF
#define VREF_Control_1_Register_VREF_output_is_ready 0x00000001

//Control 2
#define VREF_Control_2_Register_Base 0x40030000
#define VREF_Control_2_Register_Offset 0x00001108
#define VREF_Control_2_Register (*((volatile uint32_t)(VREF_Control_2_Register_Base+VREF_Control_2_Register_Offset)))
//控制宏
//Sample and Hold cycle count bit15 bit0
//Hold cycle count

#endif
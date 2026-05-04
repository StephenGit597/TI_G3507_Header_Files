//Designer:Stephen
//For TI_MSPM0G3507
#ifndef TI_AES_h
#define TI_AES_h
//字长文件引入
#include"stdint.h"
//Power Enable Register
#define AES_Power_Enable_Register_Base 0x40444000
#define AES_Power_Enable_Register_Offset 0x00000800
#define AES_Power_Enable_Register (*((volatile uint32_t)(AES_Power_Enable_Register_Base+AES_Power_Enable_Register_Offset)))
//控制宏
#define AES_Power_Enable_Register_Enable_Power 0x00000001
//KEY to allow Power State Change
#define AES_Power_Enable_Register_KEY 0x26000000

//Reset Control Register
#define AES_Reset_Control_Register_Base 0x40444000
#define AES_Reset_Control_Register_Offset 0x00000804
#define AES_Reset_Control_Register (*((volatile uint32_t)(AES_Reset_Control_Register_Base+AES_Reset_Control_Register_Offset)))
//控制宏
//Assert reset to the peripheral notice:KEY must be set to B1h to write to this bit
#define AES_Reset_Control_Register_Assert_reset 0x00000001
//Clear the RESETSTKY bit in the STAT register notice:KEY must be set to B1h to write to this bit
#define AES_Reset_Control_Register_Clear_reset_sticky_bit 0x00000002
//Unlock key
#define AES_Reset_Control_Register_Unlock_key 0xB1000000

//peripheral enable and reset status
#define AES_peripheral_enable_and_reset_status_Register_Base 0x40444000
#define AES_peripheral_enable_and_reset_status_Register_Offset 0x00000814
#define AES_peripheral_enable_and_reset_status_Register (*((volatile uint32_t)(AES_peripheral_enable_and_reset_status_Register_Base+AES_peripheral_enable_and_reset_status_Register_Offset)))
//状态宏
// This bit indicates, if the peripheral was reset, since this bit was cleared by RESETSTKYCLR in the RSTCTL register
#define AES_peripheral_enable_and_reset_status_Register_The_peripheral_was_reset 0x00010000

//Peripheral Debug Control
#define AES_Peripheral_Debug_Control_Register_Base 0x40444000
#define AES_Peripheral_Debug_Control_Register_Offset 0x00001018
#define AES_Peripheral_Debug_Control_Register (*((volatile uint32_t)(AES_Peripheral_Debug_Control_Register_Base+AES_Peripheral_Debug_Control_Register_Offset)))
//控制宏
// Free run control
#define AES_Peripheral_Debug_Control_Register_gnore_the_state_of_the_Core_Halted_input 0x00000001
// Soft halt boundary control. This function is only available, if FREE is set to 'STOP'
#define AES_Peripheral_Debug_Control_Register_block_the_debug_freeze 0x00000002

//Event mode register
#define AES_Event_mode_register_Base 0x40444000
#define AES_Event_mode_register_Offset 0x000010E0
#define AES_Event_mode_register (*((volatile uint32_t)(AES_Event_mode_register_Base+AES_Event_mode_register_Offset)))
//控制宏
//Event line mode select for event corresponding to none.CPU_INT
#define AES_Event_mode_register_CPU_INT_The_interrupt_or_event_line_is_disabled 0x00000000
#define AES_Event_mode_register_CPU_INT_The_interrupt_or_event_line_is_in_software_mode 0x00000001
#define AES_Event_mode_register_CPU_INT_The_interrupt_or_event_line_is_in_hardware_mode 0x00000002
//Event line mode select for event corresponding to none.DMA_TRIG0
#define AES_Event_mode_register_DMA_TRIG0_The_interrupt_or_event_line_is_disabled 0x00000000
#define AES_Event_mode_register_DMA_TRIG0_The_interrupt_or_event_line_is_in_software_mode 0x00000004
#define AES_Event_mode_register_DMA_TRIG0_The_interrupt_or_event_line_is_in_hardware_mode 0x00000008
//Event line mode select for event corresponding to none.DMA_TRIG1
#define AES_Event_mode_register_DMA_TRIG1_The_interrupt_or_event_line_is_disabled 0x00000000
#define AES_Event_mode_register_DMA_TRIG1_The_interrupt_or_event_line_is_in_software_mode 0x00000010
#define AES_Event_mode_register_DMA_TRIG1_The_interrupt_or_event_line_is_in_hardware_mode 0x00000020
//Event line mode select for event corresponding to none.DMA_TRIG2
#define AES_Event_mode_register_DMA_TRIG2_The_interrupt_or_event_line_is_disabled 0x00000000
#define AES_Event_mode_register_DMA_TRIG2_The_interrupt_or_event_line_is_in_software_mode 0x00000040
#define AES_Event_mode_register_DMA_TRIG2_The_interrupt_or_event_line_is_in_hardware_mode 0x00000080

//AES accelerator control register 0
#define AES_accelerator_control_register_0_Base 0x40444000
#define AES_accelerator_control_register_0_Offset 0x00001100
#define AES_accelerator_control_register_0 (*((volatile uint32_t)(AES_accelerator_control_register_0_Base+AES_accelerator_control_register_0_Offset)))
//控制宏
//AES operation
#define AES_accelerator_control_register_0_AES_operation_Encryption 0x00000000
#define AES_accelerator_control_register_0_AES_operation_Decryption_provided_key_same_to_used_for_encryption 0x00000001
#define AES_accelerator_control_register_0_AES_operation_Generate_first_round_key_required_for_decryption 0x00000002
#define AES_accelerator_control_register_0_AES_operation_Decryption 0x00000003
//AES key length.


#endif
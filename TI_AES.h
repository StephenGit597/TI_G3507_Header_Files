//Designer:Stephen
//For TI_MSPM0G3507
#ifndef TI_AES_h
#define TI_AES_h
//�ֳ��ļ�����
#include"stdint.h"
//Power Enable Register
#define AES_Power_Enable_Register_Base 0x40444000
#define AES_Power_Enable_Register_Offset 0x00000800
#define AES_Power_Enable_Register (*((volatile uint32_t)(AES_Power_Enable_Register_Base+AES_Power_Enable_Register_Offset)))
//���ƺ�
#define AES_Power_Enable_Register_Enable_Power 0x00000001
//KEY to allow Power State Change
#define AES_Power_Enable_Register_KEY 0x26000000

//Reset Control Register
#define AES_Reset_Control_Register_Base 0x40444000
#define AES_Reset_Control_Register_Offset 0x00000804
#define AES_Reset_Control_Register (*((volatile uint32_t)(AES_Reset_Control_Register_Base+AES_Reset_Control_Register_Offset)))
//���ƺ�
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
//״̬��
// This bit indicates, if the peripheral was reset, since this bit was cleared by RESETSTKYCLR in the RSTCTL register
#define AES_peripheral_enable_and_reset_status_Register_The_peripheral_was_reset 0x00010000

//Peripheral Debug Control
#define AES_Peripheral_Debug_Control_Register_Base 0x40444000
#define AES_Peripheral_Debug_Control_Register_Offset 0x00001018
#define AES_Peripheral_Debug_Control_Register (*((volatile uint32_t)(AES_Peripheral_Debug_Control_Register_Base+AES_Peripheral_Debug_Control_Register_Offset)))
//���ƺ�
// Free run control
#define AES_Peripheral_Debug_Control_Register_gnore_the_state_of_the_Core_Halted_input 0x00000001
// Soft halt boundary control. This function is only available, if FREE is set to 'STOP'
#define AES_Peripheral_Debug_Control_Register_block_the_debug_freeze 0x00000002

//Event mode register
#define AES_Event_mode_register_Base 0x40444000
#define AES_Event_mode_register_Offset 0x000010E0
#define AES_Event_mode_register (*((volatile uint32_t)(AES_Event_mode_register_Base+AES_Event_mode_register_Offset)))
//���ƺ�
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
//���ƺ�
//AES operation
#define AES_accelerator_control_register_0_AES_operation_Encryption 0x00000000
#define AES_accelerator_control_register_0_AES_operation_Decryption_provided_key_same_to_used_for_encryption 0x00000001
#define AES_accelerator_control_register_0_AES_operation_Generate_first_round_key_required_for_decryption 0x00000002
#define AES_accelerator_control_register_0_AES_operation_Decryption 0x00000003
//AES key length
#define AES_accelerator_control_register_key_size_is_128_bit 0x00000000
#define AES_accelerator_control_register_key_size_is_256_bit 0x00000008
//AES cipher mode select
#define AES_accelerator_control_register_cipher_mode_select_ECB 0x00000000
#define AES_accelerator_control_register_cipher_mode_select_CBC 0x00000020
#define AES_accelerator_control_register_cipher_mode_select_OFB 0x00000040
#define AES_accelerator_control_register_cipher_mode_select_CFB 0x00000060
//AES software reset
#define AES_accelerator_control_register_Reset_AES_accelerator_module 0x00000080
//AES error flag
#define AES_accelerator_control_register_AES_error_flag 0x00000800
//AESCMEN enables the support of the cipher modes ECB, CBC, OFB and CFB together with the DMA.
#define AES_accelerator_control_register_Enable_DMA_cipher_mode_support_operation 0x00008000

//AES accelerator control register 1
#define AES_accelerator_control_register_1_Base 0x40444000
#define AES_accelerator_control_register_1_Offset 0x00001104
#define AES_accelerator_control_register_1 (*((volatile uint32_t)(AES_accelerator_control_register_1_Base+AES_accelerator_control_register_1_Offset)))
//Cipher Block Counter. Number of blocks to be encrypted or decrypted with block cipher modes enabled

//AES accelerator status register
#define AES_accelerator_status_register_Base 0x40444000
#define AES_accelerator_status_register_Offset 0x00001108
#define AES_accelerator_status_register (*((volatile uint32_t)(AES_accelerator_status_register_Base_+AES_accelerator_status_register_Offset)))
//状态/控制宏
//AES accelerator module busy
#define AES_accelerator_status_register_AES_accelerator_module_busy 0x00000001
//All bytes written to AESAKEY
#define AES_accelerator_status_register_All_bytes_written_to_AESAKEY 0x00000002
//All 16 bytes written to AESADIN, AESAXDIN or AESAXIN
#define AES_accelerator_status_register_All_bytes_written_to_AESADIN 0x00000004
// All 16 bytes read from AESADOUT. AESDOUTRD is reset by PUC, AESSWRST
#define AES_accelerator_status_register_All_bytes_read_to_AESADOUT 0x00000008
// Bytes written to AESAKEY when AESKLx = 00, half-words written to AESAKEY if AESKLx = b10. Reset when AESKEYWR is reset. If AESKEYCNTx = 0 and AESKEYWR = 0, no bytes were written. If AESKEYCNTx = 0 and AESKEYWR = 1, all bytes were written.
// Bytes written to AESADIN, AESAXDIN or AESAXIN. Reset when AESDINWR is reset. If AESDINCNTx = 0 and AESDINWR = 0, no bytes were written. If AESDINCNTx = 0 and AESDINWR = 1, all bytes were written.
// Bytes read from AESADOUT. Reset when AESDOUTRD is reset. If AESDOUTCNTx = 0 and AESDOUTRD = 0, no bytes were read. If AESDOUTCNTx = 0 and AESDOUTRD = 1, all bytes were read.

//AES accelerator key register
#define AES_accelerator_key_register_Base 0x40444000
#define AES_accelerator_key_register_Offset 0x0000110C
#define AES_accelerator_key_register (*((volatile uint32_t)(AES_accelerator_key_register_Base+AES_accelerator_key_register_Offset)))
//KEY0x bit7-bit0
//KEY1x bit15-bit8
//KEY2x bit23-bit16
//KEY3x bit31-bit24

//AES accelerator data in register
#define AES_accelerator_data_in_register_Base 0x40444000
#define AES_accelerator_data_in_register_Offset 0x00001110
#define AES_accelerator_data_in_registe (*((volatile uint32_t)(AES_accelerator_data_in_register_Base+AES_accelerator_data_in_register_Offset)))
//DIN0x bit7-bit0
//DIN1x bit15-bit8
//DIN2x bit23-bit16
//DIN3x bit31-bit24

//AES accelerator data out register
#define AES_accelerator_data_out_register_Base 0x40444000
#define AES_accelerator_data_out_register_Offset 0x00001114
#define AES_accelerator_data_out_register (*((volatile uint32_t)(AES_accelerator_data_out_register_Base+AES_accelerator_data_out_register_Offset)))
//DOUT0x bit7-bit0
//DOUT1x bit15-bit8
//DOUT2x bit23-bit16
//DOUT3x bit31-bit24

//AES accelerator xored data in register
#define AES_accelerator_xored_data_in_register_Base 0x40444000
#define AES_accelerator_xored_data_in_register_Offset 0x00001118
#define AES_accelerator_xored_data_in_register (*((volatile uint32_t)(AES_accelerator_xored_data_in_register_Base+AES_accelerator_xored_data_in_register_Offset)))
//XDIN0x bit7-bit0
//XDIN1x bit15-bit8
//XDIN2x bit23-bit16
//XDIN3x bit31-bit24

//AES accelerator xored data in register
#define AES_accelerator_xored_data_in_register_Base 0x40444000
#define AES_accelerator_xored_data_in_register_Offset 0x0000111C
#define AES_accelerator_xored_data_in_register (*((volatile uint32_t)(AES_accelerator_xored_data_in_register_Base+AES_accelerator_xored_data_in_register_Offset)))
//XIN0x bit7-bit0
//XIN1x bit15-bit8
//XIN2x bit23-bit16
//XIN3x bit31-bit24

#endif
//注：普通AES；高级硬件加密AESADV G3507使用普通AES
//Designer:Stephen
//For TI_MSPM0G3507
#ifndef TI_CRC_h
#define TI_CRC_h
//�ֳ��ļ�����
#include"stdint.h"
#Power Enable Register
#define CRC_Power_Enable_Register_Base 0x40442000
#define CRC_Power_Enable_Register_Offset 0x00000800
#define CRC_Power_Enable_Register (*((volatile uint32_t)(CRC_Power_Enable_Register_Base+CRC_Power_Enable_Register_Offset)))
//控制宏
//Enable Power notice: KEY to allow Power State Change
#define CRC_Power_Enable_Register_Enable_Power 0x00000001
//26h = KEY to allow write access to this register
#define CRC_Power_Enable_Register_KEY_to_allow_write 0x26000000

//Reset Control Register 
#define CRC_Reset_Control_Register_Base 0x40442000
#define CRC_Reset_Control_Register_Offset 0x00000804
#define CRC_Reset_Control_Register (*((volatile uint32_t)(CRC_Reset_Control_Register_Base+CRC_Reset_Control_Register_Offset)))
//控制宏
//Assert reset to the peripheral notice:KEY must be set to B1h to write to this bit.
#define CRC_Reset_Control_Register_Assert_reset_to_the_peripheral 0x00000001
// Clear the RESETSTKY bit in the STAT register notice EY must be set to B1h to write to this bit.
#define CRC_Reset_Control_Register_Clear_the_RESETSTKY_bit 0x00000002
//B1h = KEY to allow write access to this register
#define CRC_Reset_Control_Register_Unlock_key 0xB1000000

//peripheral enable and reset status
#define CRC_peripheral_enable_and_reset_status_Register_Base 0x40442000
#define CRC_peripheral_enable_and_reset_status_Register_Offset 0x00000814
#define CRC_peripheral_enable_and_reset_status_Register (*((volatile uint32_t)(CRC_peripheral_enable_and_reset_status_Base+CRC_peripheral_enable_and_reset_status_Offset)))
//状态宏
//This bit indicates, if the peripheral was reset
#define CRC_peripheral_enable_and_reset_status_Register_peripheral_was_reset 0x00010000

//Clock source selection
#define CRC_Clock_source_selection_Register_Base 0x40442000
#define CRC_Clock_source_selection_Register_Offset 0x00001004
#define CRC_Clock_source_selection_Register (*((volatile uint32_t)(CRC_Clock_source_selection_Register_Base+CRC_Clock_source_selection_Register_Offset)))
//控制宏
//Selects main clock (MCLK) if enabled
#define CRC_Clock_source_selection_Register_Select_this_clock_as_a_source 0x00000001

//Description Register
#define CRC_Description_Register_Base 0x40442000
#define CRC_Description_Register_Offset 0x000010FC
#define CRC_Description_Register (*((volatile uint32_t)(CRC_Description_Register_Base+CRC_Description_Register_Offset)))
//Minor rev of the IP bit3-bit0
//Major rev of the IP bit7-bit4
//Instance Number within the device bit11-bit8
//Feature Set for the module *instance* bit15-bit12
// Module identification contains a unique peripheral identification number bit31-bit16

//CRC Control Register
#define CRC_Control_Register_Base 0x40442000
#define CRC_Control_Register_Offset 0x00001100
#define CRC_Control_Register (*((volatile uint32_t)(CRC_Control_Register_Base+CRC_Control_Register_Offset)))
//控制宏
//This bit indicates which CRC calculation is performed by the generator
#define CRC_Control_Register_CRC_16_CCITT_is_performed 0x00000001
//CRC Bit Input and output Reverse.
#define CRC_Control_Register_Bit_order_is_reversed 0x00000002
//CRC Endian. This bit indicates the byte order within a word or half word of input data.
#define CRC_Control_Register_LSB_is_highest_memory_address_and_last_to_be_processed 0x00000004
//CRC Output Byteswap Enable. This bit controls whether the output is byte-swapped upon a read of the CRCOUT register.
#define CRC_Control_Register_Output_byteswapping_is_enabled 0x00000010

//CRC Seed Register
#define CRC_Seed_Register_Base 0x40442000
#define CRC_Seed_Register_Offset 0x00001104
#define CRC_Seed_Register (*((volatile uint32_t)(CRC_Seed_Register_Base+CRC_Seed_Register_Offset)))
//The Data written to this register is used to initialize the CRC result with this SEED value

//CRC Input Data Register
#define CRC_Input_Data_Register_Base 0x40442000
#define CRC_Input_Data_Register_Offset 0x00001108
#define CRC_Input_Data_Register (*((volatile uint32_t)(CRC_Input_Data_Register_Base+CRC_Input_Data_Register_Offset)))
//The Data writen to this register is used along with the current CRC result to calculate the next CRC result

//CRC Output Result Register
#define CRC_Output_Result_Register_Base 0x40442000
#define CRC_Output_Result_Register_Offset 0x0000110C
#define CRC_Output_Result_Register (*((volatile uint32_t)(CRC_Output_Result_Register_Base+CRC_Output_Result_Register_Offset)))
//This register stores the result of the currect CRC calculation

//CRC Polynomial configuration register
#define CRC_Polynomial_configuration_register_Base 0x40442000
#define CRC_Polynomial_configuration_register_Offset 0x00001110
#define CRC_Polynomial_configuration_register (*((volatile uint32_t)(CRC_Polynomial_configuration_register_Base+CRC_Polynomial_configuration_register_Offset)))
//This register is present only in devices that support custom polynomials

//CRC Input Data Index Register
//结构体
typedef struct
{
    CRC Input Data Index Register[512];
}Typedef_CRC_Input_Data_Index_Register;
#define CRC_Input_Data_Index_Register_Base 0x40442000
#define CRC_Input_Data_Index_Register_Offset 0x00001800
#define CRC_Input_Data_Index_Registerx ((Typedef_CRC_Input_Data_Index_Register*)(CRC_Input_Data_Index_Register_Base+CRC_Input_Data_Index_Register_Offset))
//This register is dual mapped to CRCIN and is intended to allow operation with C memcpy routine

#endif
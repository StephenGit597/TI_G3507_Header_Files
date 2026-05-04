#ifndef TI_KeyStore_h
#define TI_KeyStore_h
//�ֳ��ļ�����
#include"stdint.h"
//Key-store configuration register
#define Key_store_configuration_register_Base 0x4044F000
#define Key_store_configuration_register_Offset 0x00001100
#define Key_store_configuration_register (*((volatile uint32_t)(Key_store_configuration_register_Base+Key_store_configuration_register_Offset)))
//控制宏
//Number of 256 bit keys to be held in the key-store bit3-bit0
#define Key_store_configuration_register_No_256_bit_keys 0x00000000
#define Key_store_configuration_register_One_256_bit_key 0x00000001
#define Key_store_configuration_register_Two_256_bit_keys 0x00000002
#define Key_store_configuration_register_Three_256_bit_keys 0x00000003
#define Key_store_configuration_register_Four_256_bit_keys 0x00000004

//Key Write Register
#define Key_store_Write_Register_Base 0x4044F000
#define Key_store_Write_Register_Offset 0x00001104
#define Key_store_Write_Register (*((volatile uint32_t)(Key_store_Write_Register_Base+Key_store_Write_Register_Offset)))
//控制宏
//Key size selection. Selection of 128 or 256 bit keys 
#define Key_store_Write_Register_128_bit_key 0x00000001
// Select the key slot to write the key into
#define Key_store_Write_Register_slot_0 0x00000000
#define Key_store_Write_Register_slot_1 0x00000010
#define Key_store_Write_Register_slot_2 0x00000020
#define Key_store_Write_Register_slot_3 0x00000030
#define Key_store_Write_Register_slot_4 0x00000040
#define Key_store_Write_Register_slot_5 0x00000050
#define Key_store_Write_Register_slot_6 0x00000060
#define Key_store_Write_Register_slot_7 0x00000070

//Key Read Register
#define Key_store_Key_Read_Register_Base 0x4044F000
#define Key_store_Key_Read_Register_Offset 0x00001108
#define Key_store_Key_Read_Register (*((volatile uint32_t)(Key_store_Key_Read_Register_Base+Key_store_Key_Read_Register_Offset)))
//控制宏
//Key size selection. Selection of 128 or 256 bit keys
#define Key_store_Key_size_selection_128_bit_key 0x00000001
//Select the key slot to read the key from bit7-bit4
//Crypto engine selector bit9-bit8

//Status register
#define Key_store_Status_register_Base 0x4044F000
#define Key_store_Status_register_Offset 0x0000110C
#define Key_store_Status_register (*((volatile uint32_t)(Key_store_Status_register_Base+Key_store_Status_register_Offset)))
//Status information
#define Key_store_Status_Valid_configuration 0x00000000
#define Key_store_Status_Key_store_has_not_been_configured 0x00000001
#define Key_store_Status_Invalid_value_for_NK256_field_in_CFG 0x00000002
#define Key_store_Status_Busy_receiving_a_key_deposit 0x00000003
#define Key_store_Status_Busy_transmitting_a_key_to_a_crypto_engine 0x00000004
#define Key_store_Status_Invalid_key_slot_selection_for_writing 0x00000005
#define Key_store_Status_Invalid_key_slot_selection_for_reading 0x00000006
//Bit vector of valid bits to indicate which slots have been configured bit11-bit4
//Size of key storage: Number of 128-bit key slots
#define Key_store_Status_register_Two_slots 0x00000000
#define Key_store_Status_register_Three_slots 0x00010000
#define Key_store_Status_register_Four_slots 0x00020000

//Key Input Register
#define Key_store_Key_Input_Register_Base 0x4044F000
#define Key_store_Key_Input_Register_Offset 0x00001110
#define Key_store_Key_Input_Register (*((volatile uint32_t)(Key_store_Key_Input_Register_Base+Key_store_Key_Input_Register_Offset)))
//Write 32-bit key value by writing to this register. This is not readable

//Key Lock Register
#define Key_store_Lock_Register_Base 0x4044F000
#define Key_store_Lock_Register_Offset 0x00001114
#define Key_store_Lock_Register (*((volatile uint32_t)(Key_store_Lock_Register_Base+Key_store_Lock_Register_Offset)))
//Writing 1 to this will lock the key access to the particular one hot encoded slot bit7-bit0

#endif
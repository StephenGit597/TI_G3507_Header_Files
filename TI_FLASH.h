//Designer:Stephen
//For TI_MSPM0G3507
#ifndef TI_FLASH_h
#define TI_FLASH_h
//字长文件引入
#include"stdint.h"
//Hardware_Version_Description_Register
#define FLASH_Hardware_Version_Description_Register_Base 0x400CD000
#define FLASH_Hardware_Version_Description_Register_Offset 0x000010FC
#define FLASH_Hardware_Version_Description_Register (*((volatile uint32_t)(FLASH_Hardware_Version_Description_Register_Base+FLASH_Hardware_Version_Description_Register_Offset)))
//说明
/*
bit31-bit16 FLASH Module ID
bit15-bit12 Feature set
bit11-bit8 Instance number
bit7-bit4 Major Revision
bit3-bit0 Minor Revision
*/

//Command Execute Register
#define FLASH_Command_Execute_Register_Base 0x400CD000
#define FLASH_Command_Execute_Register_Offset 0x00001100
#define FLASH_Command_Execute_Register (*((volatile uint32_t)(FLASH_Command_Execute_Register_Base+FLASH_Command_Execute_Register_Offset)))
//控制宏
#define FLASH_Command_Execute_Register_Command_Execute_value 0x00000001 //bit0
//1:启动FLASH开始执行命令

//Command Type Register
#define FLASH_Command_Type_Register_Base 0x400CD000
#define FLASH_Command_Type_Register_Offset 0x00001104
#define FLASH_Command_Type_Register (*((volatile uint32_t)(FLASH_Command_Type_Register_Base+FLASH_Command_Type_Register_Offset)))
//控制宏
//命令类型控制宏
#define FLASH_Command_Type_Register_Command_type_No 0x00000000 //bit2-bit0
#define FLASH_Command_Type_Register_Command_type_Program 0x00000001 //bit2-bit0
#define FLASH_Command_Type_Register_Command_type_Erase 0x00000002 //bit2-bit0
#define FLASH_Command_Type_Register_Command_type_Read_Verify 0x00000003 //bit2-bit0
#define FLASH_Command_Type_Register_Command_type_Mode_Change 0x00000004 //bit2-bit0
#define FLASH_Command_Type_Register_Command_type_Claer_Status 0x00000005 //bit2-bit0
#define FLASH_Command_Type_Register_Command_type_Blank Verify 0x00000006 //bit2-bit0
//命令字长控制宏
#define FLASH_Command_Type_Register_Command_Size_1_Flash_Word 0x00000000 //bit6-bit4
#define FLASH_Command_Type_Register_Command_Size_2_Flash_Words 0x00000010 //bit6-bit4
#define FLASH_Command_Type_Register_Command_Size_4_Flash_Words 0x00000020 //bit6-bit4
#define FLASH_Command_Type_Register_Command_Size_8_Flash_Words 0x00000030 //bit6-bit4
#define FLASH_Command_Type_Register_Command_Size_a_Flash_Sector 0x00000040 //bit6-bit4
#define FLASH_Command_Type_Register_Command_Size_Entire_Flash_Bank 0x00000050 //bit6-bit4

//Command Control Register
#define FLASH_Command_Control_Register_Base 0x400CD000
#define FLASH_Command_Control_Register_Offset 0x00001108
#define FLASH_Command_Control_Register (*((volatile uint32_t)(FLASH_Command_Control_Register_Base+FLASH_Command_Control_Register_Offset)))
//控制宏
//模式选择
#define FLASH_Command_Control_Register_Mode_Read_Mode 0x00000000 //bit3-bit0
#define FLASH_Command_Control_Register_Mode_Read_Margin_0_Mode 0x00000002 //bit3-bit0
#define FLASH_Command_Control_Register_Mode_Read_Margin_1_Mode 0x00000004 //bit3-bit0
#define FLASH_Command_Control_Register_Mode_Read_Margin_0B_Mode 0x00000006 //bit3-bit0
#define FLASH_Command_Control_Register_Mode_Read_Margin_1B_Mode 0x00000007 //bit3-bit0
#define FLASH_Command_Control_Register_Mode_Program_Verify_Mode 0x00000009 //bit3-bit0
#define FLASH_Command_Control_Register_Mode_Program_Single_Word 0x0000000A //bit3-bit0
#define FLASH_Command_Control_Register_Mode_Erase_Verify_Mode 0x0000000B //bit3-bit0
#define FLASH_Command_Control_Register_Mode_Erase_Sector 0x0000000C //bit3-bit0
#define FLASH_Command_Control_Register_Mode_Program_Multiple_Word 0x0000000E //bit3-bit0
#define FLASH_Command_Control_Register_Mode_Erase_Bank 0x0000000F //bit3-bit0
//Bank Region
#define FLASH_Command_Control_Register_Main_Region 0x00000200 //bit12-bit9
#define FLASH_Command_Control_Register_Non_Main_Region 0x00000400 //bit12-bit9
#define FLASH_Command_Control_Register_Trim_Region 0x00000800 //bit12-bit9
#define FLASH_Command_Control_Register_Engr_Region 0x00001000 //bit12-bit9
//Enable verify before program or erase
#define FLASH_Command_Control_Register_Enable_Before_verify 0x00004000 //bit14
//Enable verify after program or erase
#define FLASH_Command_Control_Register_Enable_After_verify 0x00008000 //bit15
//Override hardware address translation
#define FLASH_Command_Control_Register_address_translation_override 0x00010000 //bit16
//Override hardware generation
#define FLASH_Command_Control_Register_hardware_generation_override 0x00020000 //bit17
//Disable use of program mask for programming
#define FLASH_Command_Control_Register_Disable_program_mask 0x00040000 //bit18
//Disable use of erase mask for erase
#define FLASH_Command_Control_Register_Disable_erase_mask 0x00080000 //bit19
//Disable Stair-Step Erase
#define FLASH_Command_Control_Register_Disable_Stair_Step_Erase 0x00100000 //bit20
//Enable invalid data verify、
#define FLASH_Command_Control_Register_Enable_invalid_data_verify 0x00200000 //bit21

//Command Address Register
#define FLASH_Command_Address_Register_Base 0x400CD000
#define FLASH_Command_Address_Register_Offset 0x00001120
#define FLASH_Command_Address_Register (*((volatile uint32_t)(FLASH_Command_Address_Register_Base+FLASH_Command_Address_Register_Offset)))
//指定FLASH操作地址

//Command Program Byte Enable Register
#define FLASH_Command_Program_Byte_Enable_Register_Base 0x400CD000
#define FLASH_Command_Program_Byte_Enable_Register_Offset 0x00001124
#define FLASH_Command_Program_Byte_Enable_Register (*((volatile uint32_t)(FLASH_Command_Program_Byte_Enable_Register_Base+FLASH_Command_Program_Byte_Enable_Register_Offset)))
//低7位有效

//Command Data Register 0
#define FLASH_Command_Data_Register_0_Base 0x400CD000
#define FLASH_Command_Data_Register_0_Offset 0x00001130
#define FLASH_Command_Data_Register_0 (*((volatile uint32_t)(FLASH_Command_Data_Register_0_Base+FLASH_Command_Data_Register_0_Offset)))
//31bit0-bit0

//Command Data Register 1
#define FLASH_Command_Data_Register_1_Base 0x400CD000
#define FLASH_Command_Data_Register_1_Offset 0x00001134
#define FLASH_Command_Data_Register_1 (*((volatile uint32_t)(FLASH_Command_Data_Register_1_Base+FLASH_Command_Data_Register_1_Offset)))
//31bit0-bit0

//Command Data Register 4
#define FLASH_Command_Data_Register_4_Base 0x400CD000
#define FLASH_Command_Data_Register_4_Offset 0x00001140
#define FLASH_Command_Data_Register_4 (*((volatile uint32_t)(FLASH_Command_Data_Register_4_Base+FLASH_Command_Data_Register_4_Offset)))
//31bit0-bit0

//Command Data Register 5
#define FLASH_Command_Data_Register_5_Base 0x400CD000
#define FLASH_Command_Data_Register_5_Offset 0x00001144
#define FLASH_Command_Data_Register_5 (*((volatile uint32_t)(FLASH_Command_Data_Register_5_Base+FLASH_Command_Data_Register_5_Offset)))
//31bit0-bit0

//Command Data Register 6
#define FLASH_Command_Data_Register_6_Base 0x400CD000
#define FLASH_Command_Data_Register_6_Offset 0x00001148
#define FLASH_Command_Data_Register_6 (*((volatile uint32_t)(FLASH_Command_Data_Register_6_Base+FLASH_Command_Data_Register_6_Offset)))
//31bit0-bit0

//Command Data Register 7
#define FLASH_Command_Data_Register_7_Base 0x400CD000
#define FLASH_Command_Data_Register_7_Offset 0x0000114C
#define FLASH_Command_Data_Register_7 (*((volatile uint32_t)(FLASH_Command_Data_Register_7_Base+FLASH_Command_Data_Register_7_Offset)))
//31bit0-bit0

//Command Data Register 8
#define FLASH_Command_Data_Register_8_Base 0x400CD000
#define FLASH_Command_Data_Register_8_Offset 0x00001150
#define FLASH_Command_Data_Register_8 (*((volatile uint32_t)(FLASH_Command_Data_Register_8_Base+FLASH_Command_Data_Register_8_Offset)))
//31bit0-bit0

//Command Data Register 9
#define FLASH_Command_Data_Register_9_Base 0x400CD000
#define FLASH_Command_Data_Register_9_Offset 0x00001154
#define FLASH_Command_Data_Register_9 (*((volatile uint32_t)(FLASH_Command_Data_Register_9_Base+FLASH_Command_Data_Register_9_Offset)))
//31bit0-bit0

//Command Data Register 10
#define FLASH_Command_Data_Register_10_Base 0x400CD000
#define FLASH_Command_Data_Register_10_Offset 0x00001158
#define FLASH_Command_Data_Register_10 (*((volatile uint32_t)(FLASH_Command_Data_Register_10_Base+FLASH_Command_Data_Register_10_Offset)))
//31bit0-bit0

//Command Data Register 11
#define FLASH_Command_Data_Register_11_Base 0x400CD000
#define FLASH_Command_Data_Register_11_Offset 0x0000115C
#define FLASH_Command_Data_Register_11 (*((volatile uint32_t)(FLASH_Command_Data_Register_11_Base+FLASH_Command_Data_Register_11_Offset)))
//31bit0-bit0

//Command Data Register 12
#define FLASH_Command_Data_Register_12_Base 0x400CD000
#define FLASH_Command_Data_Register_12_Offset 0x00001160
#define FLASH_Command_Data_Register_12 (*((volatile uint32_t)(FLASH_Command_Data_Register_12_Base+FLASH_Command_Data_Register_12_Offset)))
//31bit0-bit0

//Command Data Register 13
#define FLASH_Command_Data_Register_13_Base 0x400CD000
#define FLASH_Command_Data_Register_13_Offset 0x00001164
#define FLASH_Command_Data_Register_13 (*((volatile uint32_t)(FLASH_Command_Data_Register_13_Base+FLASH_Command_Data_Register_13_Offset)))
//31bit0-bit0

//Command Data Register 14
#define FLASH_Command_Data_Register_14_Base 0x400CD000
#define FLASH_Command_Data_Register_14_Offset 0x00001168
#define FLASH_Command_Data_Register_14 (*((volatile uint32_t)(FLASH_Command_Data_Register_14_Base+FLASH_Command_Data_Register_14_Offset)))
//31bit0-bit0

//Command Data Register 15
#define FLASH_Command_Data_Register_15_Base 0x400CD000
#define FLASH_Command_Data_Register_15_Offset 0x0000116C
#define FLASH_Command_Data_Register_15 (*((volatile uint32_t)(FLASH_Command_Data_Register_15_Base+FLASH_Command_Data_Register_15_Offset)))
//31bit0-bit0

//Command Data ECC Register 0
#define FLASH_Command_Data_ECC_Register_0_Base 0x400CD000
#define FLASH_Command_Data_ECC_Register_0_Offset 0x000011B0
#define FLASH_Command_Data_ECC_Register_0 (*((volatile uint32_t)(FLASH_Command_Data_ECC_Register_0_Base+FLASH_Command_Data_ECC_Register_0_Offset)))
//低八位有效

//Command Write Erase Protect A Register
#define FLASH_Command_Write_Erase_Protect_A_Register_Base 0x400CD000
#define FLASH_Command_Write_Erase_Protect_A_Register_Offset 0x000011D0
#define FLASH_Command_Write_Erase_Protect_A_Register (*((volatile uint32_t)(FLASH_Command_Write_Erase_Protect_A_Register_Base+FLASH_Command_Write_Erase_Protect_A_Register_Offset)))
//作用： Each bit protects 1 sectors

//Command Write Erase Protect B Register
#define FLASH_Command_Write_Erase_Protect_B_Register_Base 0x400CD000
#define FLASH_Command_Write_Erase_Protect_B_Register_Offset 0x000011D4
#define FLASH_Command_Write_Erase_Protect_B_Register (*((volatile uint32_t)(FLASH_Command_Write_Erase_Protect_B_Register_Base+FLASH_Command_Write_Erase_Protect_B_Register_Offset)))
//作用： Each bit protects 1 sectors

//Command Write Erase Protect Non-Main Register
#define FLASH_Command_Write_Erase_Protect_Non_Main_Register_Base 0x400CD000
#define FLASH_Command_Write_Erase_Protect_Non_Main_Register_Offset 0x00001210
#define FLASH_Command_Write_Erase_Protect_Non_Main_Register (*((volatile uint32_t)(FLASH_Command_Write_Erase_Protect_Non_Main_Register_Base+FLASH_Command_Write_Erase_Protect_Non_Main_Register_Offset)))
// Each bit protects 1 sector

//Command Write Erase Protect Trim Register
#define FLASH_Command_Write_Erase_Protect_Trim_Register_Base 0x400CD000
#define FLASH_Command_Write_Erase_Protect_Trim_Register_Offset 0x00001214
#define FLASH_Command_Write_Erase_Protect_Trim_Register (*((volatile uint32_t)(FLASH_Command_Write_Erase_Protect_Trim_Register_Base+FLASH_Command_Write_Erase_Protect_Trim_Register_Offset)))
//Each bit protects 1 sector

//Command Write Erase Protect Engineering Register
#define FLASH_Command_Write_Erase_Protect_Engineering_Register_Base 0x400CD000
#define FLASH_Command_Write_Erase_Protect_Engineering_Register_Offset 0x00001218
#define FLASH_Command_Write_Erase_Protect_Engineering_Register (*((volatile uint32_t)(FLASH_Command_Write_Erase_Protect_Engineering_Register_Base+FLASH_Command_Write_Erase_Protect_Engineering_Register_Offset)))
//Each bit protects 1 sector

//Command Configuration Register
#define FLASH_Command_Configuration_Register_Base 0x400CD000
#define FLASH_Command_Configuration_Register_Offset 0x000013B0
#define FLASH_Command_Configuration_Register (*((volatile uint32_t)(FLASH_Command_Configuration_Register_Base+FLASH_Command_Configuration_Register_Offset)))
//低四位有效 
//Wait State setting for program verify, erase verify and read verify

//Pulse Counter Configuration Register
#define FLASH_Pulse_Counter_Configuration_Register_Base 0x400CD000
#define FLASH_Pulse_Counter_Configuration_Register_Offset 0x000013B4
#define FLASH_Pulse_Counter_Configuration_Register (*((volatile uint32_t)(FLASH_Pulse_Counter_Configuration_Register_Base+FLASH_Pulse_Counter_Configuration_Register_Offset)))
//控制宏
//Override hard-wired maximum pulse count
#define FLASH_Pulse_Counter_Configuration_Register_Use_hard_wired_value_for_maximum_pulse_count 0x00000001 //bit0
// Override maximum pulse counter with this value //bit11-bit4

//Command Status Register
#define FLASH_Command_Status_Register_Base 0x400CD000
#define FLASH_Command_Status_Register_Offset 0x000013D0
#define FLASH_Command_Status_Register (*((volatile uint32_t)(FLASH_Command_Status_Register_Base+FLASH_Command_Status_Register_Offset)))
//标志宏
#define FLASH_Command_Status_Register_Command_Done 0x00000001 //bit0
#define FLASH_Command_Status_Register_Command_Pass 0x00000002 //bit1
#define FLASH_Command_Status_Register_Command_In_Progress 0x00000004 //bit2
//Command failed due to Write/Erase Protect Sector Violation
#define FLASH_Command_Status_Register_Command_failed_due_to_Write_Erase_Protect_Sector_Violation 0x00000010 //bit4
//Command failed due to verify error
#define FLASH_Command_Status_Register_failed_due_to_verify_error 0x00000020 //bit5
//Command failed due to the use of an illegal address
#define FLASH_Command_Status_Register_Command_failed_due_to_the_use_of_an_illegal_address 0x00000040 //bit6
//Command failed because a bank has been set to a mode other than READ
#define FLASH_Command_Status_Register_failed_due_to_bank_other_than_READ 0x00000080 //bit7
//Program command failed because an attempt was made to programa stored 0 value to a 1
#define FLASH_Command_Status_Register_failed_due_to_program_stored_0_value_to_1 0x00000100 //bit8
//Command failed due to error other than write/erase protect violatio nor verify error
#define FLASH_Command_Status_Register_failed_due_to_other_than_write_erase_protect_violation_or_verify_error 0x00001000 //bit12

//Current Address Counter Value Register
#define FLASH_Current_Address_Counter_Value_Register_Base 0x400CD000
#define FLASH_Current_Address_Counter_Value_Register_Offset 0x000013D4
#define FLASH_Current_Address_Counter_Value_Register (*((volatile uint32_t)(FLASH_Current_Address_Counter_Value_Register_Base+FLASH_Current_Address_Counter_Value_Register_Offset)))
// Current Bank Address A bank offset address is stored in this register. bit15-bit0
// Current Region ID A region indicator is stored in this register which represents the current flash region on which the state machine is operating.
//标志宏
#define FLASH_Current_Address_Counter_Value_Register_Main_Region 0x00010000 //bit20-bit16
#define FLASH_Current_Address_Counter_Value_Register_Non_Main_Region 0x00020000 //bit20-bit16
#define FLASH_Current_Address_Counter_Value_Register_Trim_Region 0x00040000 //bit20-bit16
#define FLASH_Current_Address_Counter_Value_Register_Engr_Region 0x00080000 //bit20-bit16
// Current Bank ID A bank indicator is stored in this register which represents the current bank on which the state machine is operating.
//标志宏
#define FLASH_Current_Address_Counter_Value_Register_Bank_0 0x00200000 //bit25-bit21
#define FLASH_Current_Address_Counter_Value_Register_Bank_1 0x00400000 //bit25-bit21
#define FLASH_Current_Address_Counter_Value_Register_Bank_2 0x00800000 //bit25-bit21
#define FLASH_Current_Address_Counter_Value_Register_Bank_3 0x01000000 //bit25-bit21
#define FLASH_Current_Address_Counter_Value_Register_Bank_4 0x02000000 //bit25-bit21

//Current Pulse Count Register
#define FLASH_Current_Pulse_Count_Register_Base 0x400CD000
#define FLASH_Current_Pulse_Count_Register_Offset 0x000013D8
#define FLASH_Current_Pulse_Count_Register (*((volatile uint32_t)(FLASH_Current_Pulse_Count_Register_Base+FLASH_Current_Pulse_Count_Register_Offset)))
//Current Pulse Counter Value bit11-bit0

//Mode Status Register
#define FLASH_Mode_Status_Register_Base 0x400CD000
#define FLASH_Mode_Status_Register_Offset 0x000013DC
#define FLASH_Mode_Status_Register (*((volatile uint32_t)(FLASH_Mode_Status_Register_Base+FLASH_Mode_Status_Register_Offset)))
//状态宏
//Bank not in read mode
#define FLASH_Mode_Status_Register_Bank_not_in_read_mode 0x00000001 //可能有误需要修改
//Indicates mode of bank(s) that are not in READ mode
#define FLASH_Mode_Status_Register_Read_Mode 0x00000000 //bit11-bit8
#define FLASH_Mode_Status_Register_Read_Margin_0_Mode 0x00000200 //bit11-bit8
#define FLASH_Mode_Status_Register_Read_Margin_1_Mode 0x00000400 //bit11-bit8
#define FLASH_Mode_Status_Register_Read_Margin_0B_Mode 0x00000600 //bit11-bit8
#define FLASH_Mode_Status_Register_Read_Margin_1B_Mode 0x00000700 //bit11-bit8
#define FLASH_Mode_Status_Register_Program_Verify_Mode 0x00000900 //bit11-bit8
#define FLASH_Mode_Status_Register_Program_Single_Word 0x00000A00 //bit11-bit8
#define FLASH_Mode_Status_Register_Erase_Verify_Mode 0x00000B00 //bit11-bit8
#define FLASH_Mode_Status_Register_Erase_Sector 0x00000C00 //bit11-bit8
#define FLASH_Mode_Status_Register_Program_Multiple_Word 0x00000E00 //bit11-bit8
#define FLASH_Mode_Status_Register_Erase_Bank 0x00000F00 //bit11-bit8
//状态宏
// Bank 2T Ready. Bank(s) are ready for 2T access
#define FLASH_Mode_Status_Register_Bank_2T_Ready 0x00010000
// Bank 1T Ready. Bank(s) are ready for 1T access
#define FLASH_Mode_Status_Register_Bank_1T_Ready 0x00020000

//Global Info 0 Register
#define FLASH_Global_Info_0_Register_Base 0x400CD000
#define FLASH_Global_Info_0_Register_Offset 0x000013F0
#define FLASH_Global_Info_0_Register (*((volatile uint32_t)(FLASH_Global_Info_0_Register_Base+FLASH_Global_Info_0_Register_Offset)))
//控制宏
//Sector size in bytes
#define FLASH_Global_Info_0_Register_Sector_size_is_ONEKB 0x00000400
#define FLASH_Global_Info_0_Register_Sector_size_is_TWOKB 0x00000800
//Number of banks instantiated Minimum: 1 Maximum:  bit18-bit16

//Global Info 1 Register
#define FLASH_Global_Info_1_Register_Base 0x400CD000
#define FLASH_Global_Info_1_Register_Offset 0x000013F4
#define FLASH_Global_Info_1_Register (*((volatile uint32_t)(FLASH_Global_Info_1_Register_Base+FLASH_Global_Info_1_Register_Offset)))
//Data width in bits
#define FLASH_Global_Info_1_Register_Data_width_is_64_bits 0x00000040
#define FLASH_Global_Info_1_Register_Data_width_is_128_bits 0x00000080
//ECC data width in bits
#define FLASH_Global_Info_1_Register_ECC_data_width_is_0 0x00000000
#define FLASH_Global_Info_1_Register_ECC_data_width_is_8_bits 0x00000800
#define FLASH_Global_Info_1_Register_ECC_data_width_is_16_bits 0x00001000
//Redundant data width in bits
#define FLASH_Global_Info_1_Register_Redundant_data_width_is_0 0x00000000
#define FLASH_Global_Info_1_Register_Redundant_data_width_is_2_bits 0x00020000
#define FLASH_Global_Info_1_Register_Redundant_data_width_is_4_bits 0x00040000

//Global Info 2 Register
#define FLASH_Global_Info_2_Register_Base 0x400CD000
#define FLASH_Global_Info_2_Register_Offset 0x000013F8
#define FLASH_Global_Info_2_Register (*((volatile uint32_t)(FLASH_Global_Info_2_Register_Base+FLASH_Global_Info_2_Register_Offset)))
//Number of data registers present Bit3-bit0

//Bank Info 0 Register for Bank 0
#define FLASH_Bank_Info_0_Register_for_Bank_0_Base 0x400CD000
#define FLASH_Bank_Info_0_Register_for_Bank_0_Offset 0x00001400
#define FLASH_Bank_Info_0_Register (*((volatile uint32_t)(FLASH_Bank_Info_0_Register_for_Bank_0_Base+FLASH_Bank_Info_0_Register_for_Bank_0_Offset)))
//Main region size in sectors Minimum Main region size in sectors Minimum: 0x8 (8) Maximum: 0x200 (512)8h = Minimum value of [MAINSIZE]200h = Maximum value of [MAINSIZE]

//Bank Info 1 Register for Bank 0
#define FLASH_Bank_Info_1_Register_for_Bank_0_Base 0x400CD000
#define FLASH_Bank_Info_1_Register_for_Bank_0_Offset 0x00001404
#define FLASH_Bank_Info_1_Register_for_Bank_0 (*((volatile uint32_t)(FLASH_Bank_Info_1_Register_for_Bank_0_Base+FLASH_Bank_Info_1_Register_for_Bank_0_Offset)))
//Non-main region size in sectors Minimum: 0x0 (0) Maximum: 0x10 bit7-bit0
//Trim region size in sectors Minimum: 0x0 (0) Maximum: 0x10 bit15-bit8
//Engr region size in sectors Minimum: 0x0 (0) Maximum: 0x10 bit23-bit16

#endif
//Designer:Stephen
//For TI_MSPM0G3507
#ifndef TI_MATHACL_h
#define TI_MATHACL_h
//×Ö³¤ÎÄ¼þÒýÈë
#include"stdint.h"
//Power Enable Register
#define MATHACL_Power_Enable_Register_Base 0x40468000
#define MATHACL_Power_Enable_Register_Offset 0x00000800
#define MATHACL_Power_Enable_Register (*((volatile uint32_t)(MATHACL_Power_Enable_Register_Base+MATHACL_Power_Enable_Register_Offset)))
//¿ØÖÆºê
//Enable the power notice:KEY must be set to 26h to write to this bit.
#define MATHACL_Power_Enable_Register_Enable_Power 0x00000001//bit0
//KEY to allow Power State Change
#define MATHACL_Power_Enable_Register_KEY_to_allow_write_access_to_this_register 0x26000000//bit31-bit24

//Reset Control Register
#define MATHACL_Reset_Control_Register_Base 0x40468000
#define MATHACL_Reset_Control_Register_Offset 0x00000804
#define MATHACL_Reset_Control_Register (*((volatile uint32_t)(MATHACL_Reset_Control_Register_Base+MATHACL_Reset_Control_Register_Offset)))
//¿ØÖÆºê
//Assert reset to the peripheral notice:KEY must be set to B1h to write to this bit.
#define MATHACL_Reset_Control_Register_Assert_reset_to_the_peripheral 0x00000001 //bit0
//Clear the RESETSTKY bit in the STAT register notice:KEY must be set to B1h to write to this bit.
#define MATHACL_Reset_Control_Register_Clear_the_RESETSTKY_bit_in_the_STAT_register 0x00000002 //bit1
//Unlock key B1h = KEY to allow write access to this register
#define MATHACL_Reset_Control_Register_KEY_to_allow_write_access_to_this_register_B1 0xB1000000

//Status Register
#define MATHACL_Status_Register_Base 0x40468000
#define MATHACL_Status_Register_Offset 0x00000814
#define MATHACL_Status_Register (*((volatile uint32_t)(MATHACL_Status_Register_Base+MATHACL_Status_Register_Offset)))
//×´Ì¬ºê
//This bit indicates, if the peripheral was reset, since this bit was cleared by RESETSTKYCLR in the RSTCTL register
#define MATHACL_Status_Register_The_peripheral_was_reset 0x00010000

//Control Register
#define MATHACL_Control_Register_Base 0x40468000
#define MATHACL_Control_Register_Offset 0x00001100
#define MATHACL_Control_Register (*((volatile uint32_t)(MATHACL_Control_Register_Base+MATHACL_Control_Register_Offset)))
//¿ØÖÆºê
//FUNC
#define MATHACL_Control_Register_No_operation 0x00000000
#define MATHACL_Control_Register_Sine_and_Cosine_operation 0x00000001
#define MATHACL_Control_Register_Arc_tangent_with_x_and_y_values_as_operands 0x00000002
#define MATHACL_Control_Register_Divide 0x00000004
#define MATHACL_Control_Register_square_root 0x00000005
#define MATHACL_Control_Register_32_bit_Multiply_Result 0x00000006
#define MATHACL_Control_Register_32_bit_square_result 0x00000007
#define MATHACL_Control_Register_64_bit_multiply_result 0x00000008
#define MATHACL_Control_Register_64_bit_square_result 0x00000009
#define MATHACL_Control_Register_Multiply_and_accumulate_operation 0x0000000A
#define MATHACL_Control_Register_Square_and_accumulate_operation 0x0000000B
//OPTYPE
#define MATHACL_Control_Register_Signed_operands 0x00000010
//QVAL  Indicates the fractional bits in the operands, ranges from 0 to 31.
#define MATHACL_Control_Register_fractional_bits_Q0_operands 0x00000000
#define MATHACL_Control_Register_fractional_bits_Q1_operands 0x00000100
#define MATHACL_Control_Register_fractional_bits_Q2_operands 0x00000200
#define MATHACL_Control_Register_fractional_bits_Q3_operands 0x00000300
#define MATHACL_Control_Register_fractional_bits_Q4_operands 0x00000400
#define MATHACL_Control_Register_fractional_bits_Q5_operands 0x00000500
#define MATHACL_Control_Register_fractional_bits_Q6_operands 0x00000600
#define MATHACL_Control_Register_fractional_bits_Q7_operands 0x00000700
#define MATHACL_Control_Register_fractional_bits_Q8_operands 0x00000800
#define MATHACL_Control_Register_fractional_bits_Q9_operands 0x00000900
#define MATHACL_Control_Register_fractional_bits_Q10_operands 0x00000A00
#define MATHACL_Control_Register_fractional_bits_Q11_operands 0x00000B00
#define MATHACL_Control_Register_fractional_bits_Q12_operands 0x00000C00
#define MATHACL_Control_Register_fractional_bits_Q13_operands 0x00000D00
#define MATHACL_Control_Register_fractional_bits_Q14_operands 0x00000E00
#define MATHACL_Control_Register_fractional_bits_Q15_operands 0x00000F00
#define MATHACL_Control_Register_fractional_bits_Q16_operands 0x00001000
#define MATHACL_Control_Register_fractional_bits_Q17_operands 0x00001100
#define MATHACL_Control_Register_fractional_bits_Q18_operands 0x00001200
#define MATHACL_Control_Register_fractional_bits_Q19_operands 0x00001300
#define MATHACL_Control_Register_fractional_bits_Q20_operands 0x00001400
#define MATHACL_Control_Register_fractional_bits_Q21_operands 0x00001500
#define MATHACL_Control_Register_fractional_bits_Q22_operands 0x00001600
#define MATHACL_Control_Register_fractional_bits_Q23_operands 0x00001700
#define MATHACL_Control_Register_fractional_bits_Q24_operands 0x00001800
#define MATHACL_Control_Register_fractional_bits_Q25_operands 0x00001900
#define MATHACL_Control_Register_fractional_bits_Q26_operands 0x00001A00
#define MATHACL_Control_Register_fractional_bits_Q27_operands 0x00001B00
#define MATHACL_Control_Register_fractional_bits_Q28_operands 0x00001C00
#define MATHACL_Control_Register_fractional_bits_Q29_operands 0x00001D00
#define MATHACL_Control_Register_fractional_bits_Q30_operands 0x00001E00
#define MATHACL_Control_Register_fractional_bits_Q31_operands 0x00001F00
//SFACTOR Scaling factor. In case of SQRT function, the input operand needs to be in a range bit21-bit16
//SATEN This bit is shared among DIV, SQUARE32, MPY32, MAC and SAC functions
#define MATHACL_Control_Register_Saturation_enable 0x00400000
//NUMITER  Number of iterations, applicable if the function does the computations iteratively, for example sine/cosine/atan2/sqrt. Note: A value of 0 is interpreted as 31.bit28-bit24

//Operand_2_Register
#define MATHACL_Operand_2_Register_Base 0x40468000
#define MATHACL_Operand_2_Register_Offset 0x00001118
#define MATHACL_Operand_2_Register (*((volatile uint32_t)(MATHACL_Operand_2_Register_Base+MATHACL_Operand_2_Register_Offset)))
//Operand 2 Register

//Operand_1_Register
#define MATHACL_Operand_1_Register_Base 0x40468000
#define MATHACL_Operand_1_Register_Offset 0x0000111C
#define MATHACL_Operand_1_Register (*((volatile uint32_t)(MATHACL_Operand_1_Register_Base+MATHACL_Operand_1_Register_Offset)))
//Operand 1 Register

//Result 1 Register
#define MATHACL_Result_1_Register_Base 0x40468000
#define MATHACL_Result_1_Register_Offset 0x00001120
#define MATHACL_Result_1_Register (*((volatile uint32_t)(MATHACL_Result_1_Register_Base+MATHACL_Result_1_Register_Offset)))
//Result 1 Register

//Result 2 Register
#define MATHACL_Result_2_Register_Base 0x40468000
#define MATHACL_Result_2_Register_Offset 0x00001124
#define MATHACL_Result_2_Register (*((volatile uint32_t)(MATHACL_Result_2_Register_Base+MATHACL_Result_2_Register_Offset)))
//Result 2 Register

//Status Register
#define MATHACL_Status_Register2_Base 0x40468000
#define MATHACL_Status_Register2_Offset 0x00001130
#define MATHACL_Status_Register2 (*((volatile uint32_t)(MATHACL_Status_Register2_Base+MATHACL_Status_Register2_Offset)))
//×´Ì¬ºê
//Underflow Flag
#define MATHACL_Status_Register2_Underflow_Flag 0x00000001
//Overflow bit for MPY32, SQUARE32, DIV, MAC, and SAC functions
#define MATHACL_Status_Register2_Overflow_bit 0x00000002
//Incorrect inputs/outputs
#define MATHACL_Status_Register2_Incorrect_inputs_outputs 0x00000004
//MATHACL busy bit
#define MATHACL_Status_Register2_MATHACL_busy_bit 0x00000100

//Status Clear Register
#define MATHACL_Status_Clear_Register_Base 0x40468000
#define MATHACL_Status_Clear_Register_Offset 0x00001140
#define MATHACL_Status_Clear_Register (*((volatile uint32_t)(MATHACL_Status_Clear_Register_Base+MATHACL_Status_Clear_Register_Offset)))
//×´Ì¬ºê
//Write 1 to this bit to clear STATUS.UF bit
#define MATHACL_Status_Clear_Register_clear_STATUS_UF_bit 0x00000001
//Write 1 to this bit to clear STATUS.OVF bit
#define MATHACL_Status_Clear_Register_clear_STATUS_OVF_bit 0x00000002
//Write 1 to this bit to clear STATUS.ERR field
#define MATHACL_Status_Clear_Register_clear_STATUS_ERR_field 0x00000004

#endif
//Designer:Stephen
//For TI_MSPM0G3507
#ifndef TI_DMA_H
#define TI_DMA_H
//字长文件引入
#include"stdint.h"
//DMA_Description_Register
#define DMA_Description_Register_Base 0x4042A000
#define DMA_Description_Register_Offset 0x000010FC
#define DMA_Description_Register (*((volatile uint32_t)(DMA_Description_Register_Base+DMA_Description_Register_Offset)))
/*
bit16-bit31 DMA外设识别号
bit12-bit15 此芯片DMA通道数
bit4-bit7 主版本号
bit0-bit3 次版本号
*/

//DMA_Channel_Priority_Control_Register
#define DMA_Channel_Priority_Control_Register_Base 0x4042A000
#define DMA_Channel_Priority_Control_Register_Offset 0x00001100
#define DMA_Channel_Priority_Control_Register (*((volatile uint32_t)(DMA_Channel_Priority_Control_Register_Base+DMA_Channel_Priority_Control_Register_Offset)))
//控制宏
//Round_Enable
#define DMA_Channel_Priority_Control_Register_Round_robin_Enable 0x00000001 //bit0
//Burst Size
#define DMA_Channel_Priority_Control_Register_burst_size_No 0x00000000 //bit17 bi16
#define DMA_Channel_Priority_Control_Register_burst_size_8 0x00010000 //bit17 bi16
#define DMA_Channel_Priority_Control_Register_burst_size_16 0x00020000 //bit17 bi16
#define DMA_Channel_Priority_Control_Register_burst_size_32 0x00030000 //bit17 bi16

//DMA_Trigger_Control_Register
#define DMA_Trigger_Control_Register_CHx_Base 0x4042A000
#define DMA_Trigger_Control_Register_CHx_Offset 0x00001110
#define DMA_Trigger_Control_Register_CHx ((Typedef_DMA_Trigger_Control_Register_CHx*)(DMA_Trigger_Control_Register_CHx_Base+DMA_Trigger_Control_Register_CHx_Offset))
typedef struct 
{
	volatile uint32_t DMA_Trigger_Control_Register_CH0;
	volatile uint32_t DMA_Trigger_Control_Register_CH1;
	volatile uint32_t DMA_Trigger_Control_Register_CH2;
	volatile uint32_t DMA_Trigger_Control_Register_CH3;
	volatile uint32_t DMA_Trigger_Control_Register_CH4;
	volatile uint32_t DMA_Trigger_Control_Register_CH5;
	volatile uint32_t DMA_Trigger_Control_Register_CH6;
	volatile uint32_t DMA_Trigger_Control_Register_CH7;
	volatile uint32_t DMA_Trigger_Control_Register_CH8;
	volatile uint32_t DMA_Trigger_Control_Register_CH9;
	volatile uint32_t DMA_Trigger_Control_Register_CH10;
	volatile uint32_t DMA_Trigger_Control_Register_CH11;
	volatile uint32_t DMA_Trigger_Control_Register_CH12;
	volatile uint32_t DMA_Trigger_Control_Register_CH13;
	volatile uint32_t DMA_Trigger_Control_Register_CH14;
	volatile uint32_t DMA_Trigger_Control_Register_CH15;
}Typedef_DMA_Trigger_Control_Register_CHx;
//控制宏
#define DMA_Trigger_Control_Register_CHx_DMA_Trigger_SEL_Software 0x00000000 //bit5-bit0

#define DMA_Trigger_Control_Register_CHx_DMA_Trigger_by_Internal_Channel 0x00000080 //bit7

//DMA_Channel_Control_Register
#define DMA_Channel_Control_Register_CHx_Base 0x4042A000
#define DMA_Channel_Control_Register_CHx_Offset 0x00001200
#define DMA_Channel_Control_Register_CH0 (*((volatile uint32_t)(DMA_Channel_Control_Register_CHx_Base+DMA_Channel_Control_Register_CHx_Offset)))
#define DMA_Channel_Control_Register_CH1 (*((volatile uint32_t)(DMA_Channel_Control_Register_CHx_Base+DMA_Channel_Control_Register_CHx_Offset+1*10)))
#define DMA_Channel_Control_Register_CH2 (*((volatile uint32_t)(DMA_Channel_Control_Register_CHx_Base+DMA_Channel_Control_Register_CHx_Offset+2*10)))
#define DMA_Channel_Control_Register_CH3 (*((volatile uint32_t)(DMA_Channel_Control_Register_CHx_Base+DMA_Channel_Control_Register_CHx_Offset+3*10)))
#define DMA_Channel_Control_Register_CH4 (*((volatile uint32_t)(DMA_Channel_Control_Register_CHx_Base+DMA_Channel_Control_Register_CHx_Offset+4*10)))
#define DMA_Channel_Control_Register_CH5 (*((volatile uint32_t)(DMA_Channel_Control_Register_CHx_Base+DMA_Channel_Control_Register_CHx_Offset+5*10)))
#define DMA_Channel_Control_Register_CH6 (*((volatile uint32_t)(DMA_Channel_Control_Register_CHx_Base+DMA_Channel_Control_Register_CHx_Offset+6*10)))
#define DMA_Channel_Control_Register_CH7 (*((volatile uint32_t)(DMA_Channel_Control_Register_CHx_Base+DMA_Channel_Control_Register_CHx_Offset+7*10)))
#define DMA_Channel_Control_Register_CH8 (*((volatile uint32_t)(DMA_Channel_Control_Register_CHx_Base+DMA_Channel_Control_Register_CHx_Offset+8*10)))
#define DMA_Channel_Control_Register_CH9 (*((volatile uint32_t)(DMA_Channel_Control_Register_CHx_Base+DMA_Channel_Control_Register_CHx_Offset+9*10)))
#define DMA_Channel_Control_Register_CH10 (*((volatile uint32_t)(DMA_Channel_Control_Register_CHx_Base+DMA_Channel_Control_Register_CHx_Offset+10*10)))
#define DMA_Channel_Control_Register_CH11 (*((volatile uint32_t)(DMA_Channel_Control_Register_CHx_Base+DMA_Channel_Control_Register_CHx_Offset+11*10)))
#define DMA_Channel_Control_Register_CH12 (*((volatile uint32_t)(DMA_Channel_Control_Register_CHx_Base+DMA_Channel_Control_Register_CHx_Offset+12*10)))
#define DMA_Channel_Control_Register_CH13 (*((volatile uint32_t)(DMA_Channel_Control_Register_CHx_Base+DMA_Channel_Control_Register_CHx_Offset+13*10)))
#define DMA_Channel_Control_Register_CH14 (*((volatile uint32_t)(DMA_Channel_Control_Register_CHx_Base+DMA_Channel_Control_Register_CHx_Offset+14*10)))
#define DMA_Channel_Control_Register_CH15 (*((volatile uint32_t)(DMA_Channel_Control_Register_CHx_Base+DMA_Channel_Control_Register_CHx_Offset+15*10)))
//控制宏
//DMA Start
#define DMA_Channel_Control_Register_DMA_Start 0x00000001 //bit0
//DMA Enable
#define DMA_Channel_Control_Register_DMA_Enable 0x00000002 //bit1
//DMA Auto Enable
#define DMA_Channel_Control_Register_DMA_Auto_Enable_no 0x00000000 //bit3-bit2
#define DMA_Channel_Control_Register_DMA_Auto_Enable_DMASA 0x00000004 //bit3-bit2
#define DMA_Channel_Control_Register_DMA_Auto_Enable_DMADA 0x00000008 //bit3-bit2
#define DMA_Channel_Control_Register_DMA_Auto_Enable_DMASZ 0x0000000C //bit3-bit2
//DMA Transfer Processing Interupt
#define DMA_Channel_Control_Register_DMA_Early_IRQ_no 0x00000000
#define DMA_Channel_Control_Register_DMA_Early_IRQ_DMASZ_1 0x00000010 //bit6-bit4
#define DMA_Channel_Control_Register_DMA_Early_IRQ_DMASZ_2 0x00000020 //bit6-bit4
#define DMA_Channel_Control_Register_DMA_Early_IRQ_DMASZ_4 0x00000030 //bit6-bit4
#define DMA_Channel_Control_Register_DMA_Early_IRQ_DMASZ_8 0x00000040 //bit6-bit4
#define DMA_Channel_Control_Register_DMA_Early_IRQ_DMASZ_32 0x00000050 //bit6-bit4
#define DMA_Channel_Control_Register_DMA_Early_IRQ_DMASZ_64 0x00000060 //bit6-bit4
#define DMA_Channel_Control_Register_DMA_Early_IRQ_Half_Size 0x00000070 //bit6-bit4
//DMA Source Data Width
#define DMA_Channel_Control_Register_DMA_source_data_width_8 0x00000000 //bit10-bit8
#define DMA_Channel_Control_Register_DMA_source_data_width_16 0x00000100 //bit10-bit8
#define DMA_Channel_Control_Register_DMA_source_data_width_32 0x00000200 //bit10-bit8
#define DMA_Channel_Control_Register_DMA_source_data_width_64 0x00000300 //bit10-bit8
#define DMA_Channel_Control_Register_DMA_source_data_width_128 0x00000400 //bit10-bit8
//DMA Destination Width
#define DMA_Channel_Control_Register_DMA_destination_width_8 0x00000000 //bit14-bit12
#define DMA_Channel_Control_Register_DMA_destination_width_16 0x00001000 //bit14-bit12
#define DMA_Channel_Control_Register_DMA_destination_width_32 0x00002000 //bit14-bit12
#define DMA_Channel_Control_Register_DMA_destination_width_64 0x00003000 //bit14-bit12
#define DMA_Channel_Control_Register_DMA_destination_width_128 0x00004000 //bit14-bit12
//DMA Source Increment
#define DMA_Channel_Control_Register_DMA_Source_Increment_No 0x00000000 //bit19-bit16
#define DMA_Channel_Control_Register_DMA_Source_Increment_Decremented_1 0x00020000 //bit19-bit16
#define DMA_Channel_Control_Register_DMA_Source_Increment_Incremented_1 0x00030000 //bit19-bit16
#define DMA_Channel_Control_Register_DMA_Source_Increment_Stride_size_2 0x00080000 //bit19-bit16
#define DMA_Channel_Control_Register_DMA_Source_Increment_Stride_size_3 0x00090000 //bit19-bit16
#define DMA_Channel_Control_Register_DMA_Source_Increment_Stride_size_4 0x000A0000 //bit19-bit16
#define DMA_Channel_Control_Register_DMA_Source_Increment_Stride_size_5 0x000B0000 //bit19-bit16
#define DMA_Channel_Control_Register_DMA_Source_Increment_Stride_size_6 0x000C0000 //bit19-bit16
#define DMA_Channel_Control_Register_DMA_Source_Increment_Stride_size_7 0x000D0000 //bit19-bit16
#define DMA_Channel_Control_Register_DMA_Source_Increment_Stride_size_8 0x000E0000 //bit19-bit16
#define DMA_Channel_Control_Register_DMA_Source_Increment_Stride_size_9 0x000F0000 //bit19-bit16
//DMA destination increment
#define DMA_Channel_Control_Register_DMA_destination_increment_No 0x00000000 //bit23-bit20
#define DMA_Channel_Control_Register_DMA_destination_increment_Decremented_1 0x00200000 //bit23-bit20
#define DMA_Channel_Control_Register_DMA_destination_increment_Incremented_1 0x00300000 //bit23-bit20
#define DMA_Channel_Control_Register_DMA_destination_increment_Stride_size_2 0x00800000 //bit23-bit20
#define DMA_Channel_Control_Register_DMA_destination_increment_Stride_size_3 0x00900000 //bit23-bit20
#define DMA_Channel_Control_Register_DMA_destination_increment_Stride_size_4 0x00A00000 //bit23-bit20
#define DMA_Channel_Control_Register_DMA_destination_increment_Stride_size_5 0x00B00000 //bit23-bit20
#define DMA_Channel_Control_Register_DMA_destination_increment_Stride_size_6 0x00C00000 //bit23-bit20
#define DMA_Channel_Control_Register_DMA_destination_increment_Stride_size_7 0x00D00000 //bit23-bit20
#define DMA_Channel_Control_Register_DMA_destination_increment_Stride_size_8 0x00E00000 //bit23-bit20
#define DMA_Channel_Control_Register_DMA_destination_increment_Stride_size_9 0x00F00000 //bit23-bit20
//DMA extended mode
#define DMA_Channel_Control_Register_Normal_mode 0x00000000 //bit25 bit24
#define DMA_Channel_Control_Register_Gather_mode 0x01000000 //bit25 bit24
#define DMA_Channel_Control_Register_Fill_mode 0x02000000 //bit25 bit24
#define DMA_Channel_Control_Register_Table_mode 0x03000000 //bit25 bit24
//DMA transfer mode register
#define DMA_Channel_Control_Register_DMA_transfer_mode_Single_transfer 0x00000000 //bit28-bit28
#define DMA_Channel_Control_Register_DMA_transfer_mode_Block_transfer 0x10000000 //bit28-bit28
#define DMA_Channel_Control_Register_DMA_transfer_mode_Repeated_single_transfer 0x20000000 //bit28-bit28
#define DMA_Channel_Control_Register_DMA_transfer_mode_Repeated_block_transfer 0x30000000 //bit28-bit28

//DMA_Channel_Source_Address_Register
#define DMA_Channel_Source_Address_Register_CHx_Base 0x4042A000
#define DMA_Channel_Source_Address_Register_CHx_Offset 0x00001204
#define DMA_Channel_Source_Address_Register_CH0 (*((volatile uint32_t)(DMA_Channel_Source_Address_Register_CHx_Base+DMA_Channel_Source_Address_Register_CHx_Offset+0*10)))
#define DMA_Channel_Source_Address_Register_CH1 (*((volatile uint32_t)(DMA_Channel_Source_Address_Register_CHx_Base+DMA_Channel_Source_Address_Register_CHx_Offset+1*10)))
#define DMA_Channel_Source_Address_Register_CH2 (*((volatile uint32_t)(DMA_Channel_Source_Address_Register_CHx_Base+DMA_Channel_Source_Address_Register_CHx_Offset+2*10)))
#define DMA_Channel_Source_Address_Register_CH3 (*((volatile uint32_t)(DMA_Channel_Source_Address_Register_CHx_Base+DMA_Channel_Source_Address_Register_CHx_Offset+3*10)))
#define DMA_Channel_Source_Address_Register_CH4 (*((volatile uint32_t)(DMA_Channel_Source_Address_Register_CHx_Base+DMA_Channel_Source_Address_Register_CHx_Offset+4*10)))
#define DMA_Channel_Source_Address_Register_CH5 (*((volatile uint32_t)(DMA_Channel_Source_Address_Register_CHx_Base+DMA_Channel_Source_Address_Register_CHx_Offset+5*10)))
#define DMA_Channel_Source_Address_Register_CH6 (*((volatile uint32_t)(DMA_Channel_Source_Address_Register_CHx_Base+DMA_Channel_Source_Address_Register_CHx_Offset+6*10)))
#define DMA_Channel_Source_Address_Register_CH7 (*((volatile uint32_t)(DMA_Channel_Source_Address_Register_CHx_Base+DMA_Channel_Source_Address_Register_CHx_Offset+7*10)))
#define DMA_Channel_Source_Address_Register_CH8 (*((volatile uint32_t)(DMA_Channel_Source_Address_Register_CHx_Base+DMA_Channel_Source_Address_Register_CHx_Offset+8*10)))
#define DMA_Channel_Source_Address_Register_CH9 (*((volatile uint32_t)(DMA_Channel_Source_Address_Register_CHx_Base+DMA_Channel_Source_Address_Register_CHx_Offset+9*10)))
#define DMA_Channel_Source_Address_Register_CH10 (*((volatile uint32_t)(DMA_Channel_Source_Address_Register_CHx_Base+DMA_Channel_Source_Address_Register_CHx_Offset+10*10)))
#define DMA_Channel_Source_Address_Register_CH11 (*((volatile uint32_t)(DMA_Channel_Source_Address_Register_CHx_Base+DMA_Channel_Source_Address_Register_CHx_Offset+11*10)))
#define DMA_Channel_Source_Address_Register_CH12 (*((volatile uint32_t)(DMA_Channel_Source_Address_Register_CHx_Base+DMA_Channel_Source_Address_Register_CHx_Offset+12*10)))
#define DMA_Channel_Source_Address_Register_CH13 (*((volatile uint32_t)(DMA_Channel_Source_Address_Register_CHx_Base+DMA_Channel_Source_Address_Register_CHx_Offset+13*10)))
#define DMA_Channel_Source_Address_Register_CH14 (*((volatile uint32_t)(DMA_Channel_Source_Address_Register_CHx_Base+DMA_Channel_Source_Address_Register_CHx_Offset+14*10)))
#define DMA_Channel_Source_Address_Register_CH15 (*((volatile uint32_t)(DMA_Channel_Source_Address_Register_CHx_Base+DMA_Channel_Source_Address_Register_CHx_Offset+15*10)))
//Please write your CHx's data Source Address (uint32) here 

//DMA_Channel_Destination_Address_Register
#define DMA_Channel_Destination_Address_Register_CHx_Base 0x4042A000
#define DMA_Channel_Destination_Address_Register_CHx_Offset 0x00001208
#define DMA_Channel_Destination_Address_Register_CH0 (*((volatile uint32_t)(DMA_Channel_Destination_Address_Register_CHx_Base+DMA_Channel_Destination_Address_Register_CHx_Offset+0*10)))
#define DMA_Channel_Destination_Address_Register_CH1 (*((volatile uint32_t)(DMA_Channel_Destination_Address_Register_CHx_Base+DMA_Channel_Destination_Address_Register_CHx_Offset+1*10)))
#define DMA_Channel_Destination_Address_Register_CH2 (*((volatile uint32_t)(DMA_Channel_Destination_Address_Register_CHx_Base+DMA_Channel_Destination_Address_Register_CHx_Offset+2*10)))
#define DMA_Channel_Destination_Address_Register_CH3 (*((volatile uint32_t)(DMA_Channel_Destination_Address_Register_CHx_Base+DMA_Channel_Destination_Address_Register_CHx_Offset+3*10)))
#define DMA_Channel_Destination_Address_Register_CH4 (*((volatile uint32_t)(DMA_Channel_Destination_Address_Register_CHx_Base+DMA_Channel_Destination_Address_Register_CHx_Offset+4*10)))
#define DMA_Channel_Destination_Address_Register_CH5 (*((volatile uint32_t)(DMA_Channel_Destination_Address_Register_CHx_Base+DMA_Channel_Destination_Address_Register_CHx_Offset+5*10)))
#define DMA_Channel_Destination_Address_Register_CH6 (*((volatile uint32_t)(DMA_Channel_Destination_Address_Register_CHx_Base+DMA_Channel_Destination_Address_Register_CHx_Offset+6*10)))
#define DMA_Channel_Destination_Address_Register_CH7 (*((volatile uint32_t)(DMA_Channel_Destination_Address_Register_CHx_Base+DMA_Channel_Destination_Address_Register_CHx_Offset+7*10)))
#define DMA_Channel_Destination_Address_Register_CH8 (*((volatile uint32_t)(DMA_Channel_Destination_Address_Register_CHx_Base+DMA_Channel_Destination_Address_Register_CHx_Offset+8*10)))
#define DMA_Channel_Destination_Address_Register_CH9 (*((volatile uint32_t)(DMA_Channel_Destination_Address_Register_CHx_Base+DMA_Channel_Destination_Address_Register_CHx_Offset+9*10)))
#define DMA_Channel_Destination_Address_Register_CH10 (*((volatile uint32_t)(DMA_Channel_Destination_Address_Register_CHx_Base+DMA_Channel_Destination_Address_Register_CHx_Offset+10*10)))
#define DMA_Channel_Destination_Address_Register_CH11 (*((volatile uint32_t)(DMA_Channel_Destination_Address_Register_CHx_Base+DMA_Channel_Destination_Address_Register_CHx_Offset+11*10)))
#define DMA_Channel_Destination_Address_Register_CH12 (*((volatile uint32_t)(DMA_Channel_Destination_Address_Register_CHx_Base+DMA_Channel_Destination_Address_Register_CHx_Offset+12*10)))
#define DMA_Channel_Destination_Address_Register_CH13 (*((volatile uint32_t)(DMA_Channel_Destination_Address_Register_CHx_Base+DMA_Channel_Destination_Address_Register_CHx_Offset+13*10)))
#define DMA_Channel_Destination_Address_Register_CH14 (*((volatile uint32_t)(DMA_Channel_Destination_Address_Register_CHx_Base+DMA_Channel_Destination_Address_Register_CHx_Offset+14*10)))
#define DMA_Channel_Destination_Address_Register_CH15 (*((volatile uint32_t)(DMA_Channel_Destination_Address_Register_CHx_Base+DMA_Channel_Destination_Address_Register_CHx_Offset+15*10)))
//Please write your CHx's data Destination Address (uint32) here

//DMA_Channel_Size_Register
#define DMA_Channel_Size_Register_CHx_Base 0x4042A000
#define DMA_Channel_Size_Register_CHx_Offset 0x0000120C
#define DMA_Channel_Size_Register_CH0 (*((volatile uint32_t)(DMA_Channel_Size_Register_CHx_Base+DMA_Channel_Size_Register_CHx_Offset+0*10)))
#define DMA_Channel_Size_Register_CH1 (*((volatile uint32_t)(DMA_Channel_Size_Register_CHx_Base+DMA_Channel_Size_Register_CHx_Offset+1*10)))
#define DMA_Channel_Size_Register_CH2 (*((volatile uint32_t)(DMA_Channel_Size_Register_CHx_Base+DMA_Channel_Size_Register_CHx_Offset+2*10)))
#define DMA_Channel_Size_Register_CH3 (*((volatile uint32_t)(DMA_Channel_Size_Register_CHx_Base+DMA_Channel_Size_Register_CHx_Offset+3*10)))
#define DMA_Channel_Size_Register_CH4 (*((volatile uint32_t)(DMA_Channel_Size_Register_CHx_Base+DMA_Channel_Size_Register_CHx_Offset+4*10)))
#define DMA_Channel_Size_Register_CH5 (*((volatile uint32_t)(DMA_Channel_Size_Register_CHx_Base+DMA_Channel_Size_Register_CHx_Offset+5*10)))
#define DMA_Channel_Size_Register_CH6 (*((volatile uint32_t)(DMA_Channel_Size_Register_CHx_Base+DMA_Channel_Size_Register_CHx_Offset+6*10)))
#define DMA_Channel_Size_Register_CH7 (*((volatile uint32_t)(DMA_Channel_Size_Register_CHx_Base+DMA_Channel_Size_Register_CHx_Offset+7*10)))
#define DMA_Channel_Size_Register_CH8 (*((volatile uint32_t)(DMA_Channel_Size_Register_CHx_Base+DMA_Channel_Size_Register_CHx_Offset+8*10)))
#define DMA_Channel_Size_Register_CH9 (*((volatile uint32_t)(DMA_Channel_Size_Register_CHx_Base+DMA_Channel_Size_Register_CHx_Offset+9*10)))
#define DMA_Channel_Size_Register_CH10 (*((volatile uint32_t)(DMA_Channel_Size_Register_CHx_Base+DMA_Channel_Size_Register_CHx_Offset+10*10)))
#define DMA_Channel_Size_Register_CH11 (*((volatile uint32_t)(DMA_Channel_Size_Register_CHx_Base+DMA_Channel_Size_Register_CHx_Offset+11*10)))
#define DMA_Channel_Size_Register_CH12 (*((volatile uint32_t)(DMA_Channel_Size_Register_CHx_Base+DMA_Channel_Size_Register_CHx_Offset+12*10)))
#define DMA_Channel_Size_Register_CH13 (*((volatile uint32_t)(DMA_Channel_Size_Register_CHx_Base+DMA_Channel_Size_Register_CHx_Offset+13*10)))
#define DMA_Channel_Size_Register_CH14 (*((volatile uint32_t)(DMA_Channel_Size_Register_CHx_Base+DMA_Channel_Size_Register_CHx_Offset+14*10)))
#define DMA_Channel_Size_Register_CH15 (*((volatile uint32_t)(DMA_Channel_Size_Register_CHx_Base+DMA_Channel_Size_Register_CHx_Offset+15*10)))
//Please write your CHx's Data Transfer Numbers (uint16) in bit15 to bit0 here

#endif
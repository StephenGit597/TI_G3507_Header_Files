//Designer:Stephen
//For TI_MSPM0G3507
#ifndef TI_PINCM_h
#define TI_PINCM_h
//标准字长文件引入
#include"stdint.h"
//Pin Control Management Register
#define Pin_Control_Management_Register_PinCMx_Base 0x40428000
#define Pin_Control_Management_Register_PinCMx_Offset 0x00000004
#define Pin_Control_Management_Register_PinCMx ((Typedef_Pin_Control_Management_Register_PinCMx*)(Pin_Control_Management_Register_PinCMx_Base+Pin_Control_Management_Register_PinCMx_Offset))
//寄存器结构体声明
typedef struct
{
    volatile uint32_t Pin_Control_Management_Register_PinCM1_PA0;
    volatile uint32_t Pin_Control_Management_Register_PinCM2_PA1;
    volatile uint32_t Pin_Control_Management_Register_PinCM3_PA28;
    volatile uint32_t Pin_Control_Management_Register_PinCM4_PA29;
    volatile uint32_t Pin_Control_Management_Register_PinCM5_PA30;
    volatile uint32_t Pin_Control_Management_Register_PinCM6_PA31;
    volatile uint32_t Pin_Control_Management_Register_PinCM7_PA2;
    volatile uint32_t Pin_Control_Management_Register_PinCM8_PA3;
    volatile uint32_t Pin_Control_Management_Register_PinCM9_PA4;
    volatile uint32_t Pin_Control_Management_Register_PinCM10_PA5;
    volatile uint32_t Pin_Control_Management_Register_PinCM11_PA6;
    volatile uint32_t Pin_Control_Management_Register_PinCM12_PB0;
    volatile uint32_t Pin_Control_Management_Register_PinCM13_PB1;
    volatile uint32_t Pin_Control_Management_Register_PinCM14_PA7;
    volatile uint32_t Pin_Control_Management_Register_PinCM15_PB2;
    volatile uint32_t Pin_Control_Management_Register_PinCM16_PB3;
    volatile uint32_t Pin_Control_Management_Register_PinCM17_PB4;
    volatile uint32_t Pin_Control_Management_Register_PinCM18_PB5;
    volatile uint32_t Pin_Control_Management_Register_PinCM19_PA8;
    volatile uint32_t Pin_Control_Management_Register_PinCM20_PA9;
    volatile uint32_t Pin_Control_Management_Register_PinCM21_PA10;
    volatile uint32_t Pin_Control_Management_Register_PinCM22_PA11;
    volatile uint32_t Pin_Control_Management_Register_PinCM23_PAB6;
    volatile uint32_t Pin_Control_Management_Register_PinCM24_PB7;
    volatile uint32_t Pin_Control_Management_Register_PinCM25_PB8;
    volatile uint32_t Pin_Control_Management_Register_PinCM26_PB9;
    volatile uint32_t Pin_Control_Management_Register_PinCM27_PB10;
    volatile uint32_t Pin_Control_Management_Register_PinCM28_PB11;
    volatile uint32_t Pin_Control_Management_Register_PinCM29_PB12;
    volatile uint32_t Pin_Control_Management_Register_PinCM30_PB13;
    volatile uint32_t Pin_Control_Management_Register_PinCM31_PB14;
    volatile uint32_t Pin_Control_Management_Register_PinCM32_PB15;
    volatile uint32_t Pin_Control_Management_Register_PinCM33_PB16;
    volatile uint32_t Pin_Control_Management_Register_PinCM34_PA12;
    volatile uint32_t Pin_Control_Management_Register_PinCM35_PA13;
    volatile uint32_t Pin_Control_Management_Register_PinCM36_PA14;
    volatile uint32_t Pin_Control_Management_Register_PinCM37_PA15;
    volatile uint32_t Pin_Control_Management_Register_PinCM38_PA16;
    volatile uint32_t Pin_Control_Management_Register_PinCM39_PA17;
    volatile uint32_t Pin_Control_Management_Register_PinCM40_PA18;
    volatile uint32_t Pin_Control_Management_Register_PinCM41_PA19;
    volatile uint32_t Pin_Control_Management_Register_PinCM42_PA20;
    volatile uint32_t Pin_Control_Management_Register_PinCM43_PB17;
    volatile uint32_t Pin_Control_Management_Register_PinCM44_PB18;
    volatile uint32_t Pin_Control_Management_Register_PinCM45_PB19;
    volatile uint32_t Pin_Control_Management_Register_PinCM46_PA21;
    volatile uint32_t Pin_Control_Management_Register_PinCM47_PA22;
    volatile uint32_t Pin_Control_Management_Register_PinCM48_PB20;
    volatile uint32_t Pin_Control_Management_Register_PinCM49_PB21;
    volatile uint32_t Pin_Control_Management_Register_PinCM50_PB22;
    volatile uint32_t Pin_Control_Management_Register_PinCM51_PB23;
    volatile uint32_t Pin_Control_Management_Register_PinCM52_PB24;
    volatile uint32_t Pin_Control_Management_Register_PinCM53_PA23;
    volatile uint32_t Pin_Control_Management_Register_PinCM54_PA24;
    volatile uint32_t Pin_Control_Management_Register_PinCM55_PA25;
    volatile uint32_t Pin_Control_Management_Register_PinCM56_PB25;
    volatile uint32_t Pin_Control_Management_Register_PinCM57_PB26;
    volatile uint32_t Pin_Control_Management_Register_PinCM58_PB27;
    volatile uint32_t Pin_Control_Management_Register_PinCM59_PA26;
    volatile uint32_t Pin_Control_Management_Register_PinCM60_PA27;
}Typedef_Pin_Control_Management_Register_PinCMx;
//控制宏
//Peripheral Function selection bits
#define Pin_Control_Management_Register_PinCMx_An_encoding_per_function 0x0000003F
//Peripheral is “Connected”
#define Pin_Control_Management_Register_PinCMx_The_output_latch_of_the_dataflow_transparent 0x00000080
//This has the IOPAD WAKEUP signal as status bit.
#define Pin_Control_Management_Register_PinCMx_wakeup_source_is_from_this_IOCELL 0x00002000
//Pull Down control selection
#define Pin_Control_Management_Register_PinCMx_Pull_down_is_enabled 0x00010000
// Pull Up control selection
#define Pin_Control_Management_Register_PinCMx_Pull_Up_control_selection 0x00020000
//Input Enable Control Selection
#define Pin_Control_Management_Register_PinCMx_Input_enable_is_enabled 0x00040000
//Hysteresis Enable Control Selection
#define Pin_Control_Management_Register_PinCMx_hysteresis_is_enabled 0x00080000
//Drive strength control selection, for HS IOCELL only
#define Pin_Control_Management_Register_PinCMx_Drive_setting_of_1_selected 0x00100000
//High output value will tri-state the output when this bit is enabled
#define Pin_Control_Management_Register_PinCMx_open_drain_is_enabled 0x02000000
//Data inversion selection
#define Pin_Control_Management_Register_PinCMx_Data_inversion_is_enabled 0x04000000
//Wakeup Enable bit
#define Pin_Control_Management_Register_PinCMx_wakeup_is_enabled 0x08000000
//wakeup is enabled
#define Pin_Control_Management_Register_PinCMx_Wakeup_on_match_of_1 0x10000000

#endif
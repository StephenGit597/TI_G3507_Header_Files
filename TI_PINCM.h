//Designer:Stephen
//For TI_MSPM0G3507
#ifndef TI_PINCM_h
#define TI_PINCM_h
//字长文件引入
#include"stdint.h"
//Pin Control Management Register
#define PINCM_Pin_Control_Management_Register_Base 0x40428000
#define PINCM_Pin_Control_Management_Register_Offset 0x00000004
#define PINCM_Pin_Control_Management_Register (*((volatile uint32_t)(PINCM_Pin_Control_Management_Register_Base+PINCM_Pin_Control_Management_Register_Offset)))
//控制宏


#endif
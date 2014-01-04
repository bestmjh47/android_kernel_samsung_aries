#ifndef __GPIO_SETTINGS_H_
#define __GPIO_SETTINGS_H_

#define S3C_GPIO_SETPIN_ZERO	0
#define S3C_GPIO_SETPIN_ONE 	1
#define S3C_GPIO_SETPIN_NONE	2

#define S3C_GPIO_EINT S3C_GPIO_SPECIAL(0xF)

//	GPIO Initialization table
//	{pin number,      pin conf,        pin value,            pullup/down config}
static unsigned int initial_gpio_table[][4] =
{
	// GPA0 --------------------------------------------------------------------

	// GPA1 --------------------------------------------------------------------

	// GPB ---------------------------------------------------------------------
	{S5PV210_GPB(0),  S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPB(1),  S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPB(2),  S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPB(3),  S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPB(4),  S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPB(5),  S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPB(6),  S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPB(7),  S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 

	// GPC0 --------------------------------------------------------------------
	{S5PV210_GPC0(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPC0(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPC0(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPC0(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPC0(4), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 

	// GPC1 --------------------------------------------------------------------
	{S5PV210_GPC1(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPC1(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPC1(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPC1(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPC1(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// GPD0 --------------------------------------------------------------------
	{S5PV210_GPD0(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPD0(1), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPD0(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPD0(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// GPD1 --------------------------------------------------------------------
	{S5PV210_GPD1(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPD1(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPD1(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPD1(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPD1(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPD1(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 

	// GPE0 --------------------------------------------------------------------
	{S5PV210_GPE0(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPE0(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPE0(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPE0(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPE0(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPE0(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPE0(6), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPE0(7), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// GPE1 --------------------------------------------------------------------
	{S5PV210_GPE1(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPE1(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPE1(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPE1(3), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPE1(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// GPF0 --------------------------------------------------------------------

	// GPF1 --------------------------------------------------------------------

	// GPF2 --------------------------------------------------------------------

	// GPF3 --------------------------------------------------------------------
	{S5PV210_GPF3(4), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPF3(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// GPG0 --------------------------------------------------------------------
	{S5PV210_GPG0(0), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPG0(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG0(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPG0(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG0(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG0(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG0(6), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// GPG1 --------------------------------------------------------------------
	{S5PV210_GPG1(0), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPG1(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG1(2), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPG1(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG1(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG1(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG1(6), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// GPG2 --------------------------------------------------------------------
	{S5PV210_GPG2(0), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPG2(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG2(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPG2(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG2(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG2(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG2(6), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// GPG3 --------------------------------------------------------------------
	{S5PV210_GPG3(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG3(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG3(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG3(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG3(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG3(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG3(6), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// GPH0 --------------------------------------------------------------------
	{S5PV210_GPH0(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH0(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH0(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH0(3), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH0(4), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH0(5), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH0(6), S3C_GPIO_EINT,   S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH0(7), S3C_GPIO_EINT,   S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 

	// GPH1 --------------------------------------------------------------------
	{S5PV210_GPH1(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH1(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH1(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH1(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH1(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH1(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH1(6), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH1(7), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// GPH2 --------------------------------------------------------------------
	{S5PV210_GPH2(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH2(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH2(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH2(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH2(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH2(5), S3C_GPIO_EINT,   S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH2(6), S3C_GPIO_EINT,   S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH2(7), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 

	// GPH3 --------------------------------------------------------------------
	{S5PV210_GPH3(0), S3C_GPIO_EINT,   S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH3(1), S3C_GPIO_EINT,   S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH3(2), S3C_GPIO_EINT,   S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH3(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH3(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH3(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH3(6), S3C_GPIO_EINT,   S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH3(7), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 

	// GPI ---------------------------------------------------------------------
	{S5PV210_GPI(0),  S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPI(1),  S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPI(2),  S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPI(3),  S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPI(4),  S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPI(5),  S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPI(6),  S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// GPJ0 --------------------------------------------------------------------
	{S5PV210_GPJ0(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ0(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ0(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ0(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ0(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ0(5), S3C_GPIO_EINT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPJ0(6), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ0(7), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 

	// GPJ1 --------------------------------------------------------------------
	{S5PV210_GPJ1(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPJ1(1), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ1(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPJ1(3), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ1(4), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ1(5), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 

	// GPJ2 --------------------------------------------------------------------
	{S5PV210_GPJ2(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPJ2(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPJ2(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPJ2(4), S3C_GPIO_OUTPUT,  S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ2(5), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ2(6), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	//{S5PV210_GPJ2(7), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, // set this gpio at bootloader

	// GPJ3 --------------------------------------------------------------------
	{S5PV210_GPJ3(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPJ3(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPJ3(2), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ3(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN},
	{S5PV210_GPJ3(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ3(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ3(6), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ3(7), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 

	// GPJ4 --------------------------------------------------------------------
	{S5PV210_GPJ4(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ4(1), S3C_GPIO_EINT,   S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE},  
	{S5PV210_GPJ4(2), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ4(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ4(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// MP01 --------------------------------------------------------------------
	{S5PV210_MP01(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_MP01(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// MP02 --------------------------------------------------------------------
	{S5PV210_MP02(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_MP02(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_MP02(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// MP03 --------------------------------------------------------------------
	{S5PV210_MP03(3), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_MP03(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_UP}, 
	{S5PV210_MP03(6), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_MP03(7), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// MP04 --------------------------------------------------------------------
	{S5PV210_MP04(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_MP04(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_MP04(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_MP04(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_MP04(6), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_MP04(7), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// MP05 --------------------------------------------------------------------
	{S5PV210_MP05(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_MP05(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_MP05(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_MP05(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_MP05(4), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_MP05(6), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
};

//	off part GPIO Sleep Control table
//	{pin number,      sleep mode conf,    sleep pullup/down config}
static unsigned int sleep_gpio_table[][3] =
{
	/* off gpio part */
	{S5PV210_GPA0(0),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//BT_UART_RXD
	{S5PV210_GPA0(1),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//BT_UART_TXD
	{S5PV210_GPA0(2),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//BT_UART_CTS
	{S5PV210_GPA0(3),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//BT_UART_RTS
	{S5PV210_GPA0(4),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
	{S5PV210_GPA0(5),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
	{S5PV210_GPA0(6),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
	{S5PV210_GPA0(7),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
	{S5PV210_GPA1(0),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//AP_RXD
	{S5PV210_GPA1(1),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//AP_TXD
	{S5PV210_GPA1(2),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//AP_FLM_RXD
	{S5PV210_GPA1(3),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//AP_FLM_TXD

	{S5PV210_GPB(0),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//TDMB_SPI_CLK
    {S5PV210_GPB(1),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//TDMB_SPI_CS
    {S5PV210_GPB(2),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//TDMB_SPI_DO
    {S5PV210_GPB(3),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//TDMB_SPI_DI
    {S5PV210_GPB(4),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE}, 	//BOOT_MODE
    {S5PV210_GPB(5),S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE}, 	//WLAN_BT_EN
    {S5PV210_GPB(6),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//CAM_VGS_nRST
    {S5PV210_GPB(7),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},     //CAM_IO_EN

    {S5PV210_GPC0(0),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_GPC0(1),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_GPC0(2),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_GPC0(3),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_GPC0(4),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_GPC1(0),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_GPC1(1),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_GPC1(2),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_GPC1(3),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_GPC1(4),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC

	{S5PV210_GPD0(0),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//NC
    {S5PV210_GPD0(1),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//VIBTONE_PWM
    {S5PV210_GPD0(2),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_GPD0(3),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
	{S5PV210_GPD1(0),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//CAM_SDA_2.8V
    {S5PV210_GPD1(1),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//CAM_SCL_2.8V
    {S5PV210_GPD1(2),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE}, 	//PU, there is external pull-up
    {S5PV210_GPD1(3),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE}, 	//PU, there is external pull-up
    {S5PV210_GPD1(4),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//TSP_SDA_2.8V
    {S5PV210_GPD1(5),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//TSP_SCL_2.8V

	{S5PV210_GPE0(0),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//CAM_PCLK_F
    {S5PV210_GPE0(1),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//CAM_VSYNC
    {S5PV210_GPE0(2),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//CAM_HSYNC
    {S5PV210_GPE0(3),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//CAM_D(0)
    {S5PV210_GPE0(4),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//CAM_D(1)
    {S5PV210_GPE0(5),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//CAM_D(2)
    {S5PV210_GPE0(6),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//CAM_D(3)
    {S5PV210_GPE0(7),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//CAM_D(4)
	{S5PV210_GPE1(0),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//CAM_D(5)
    {S5PV210_GPE1(1),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//CAM_D(6)
    {S5PV210_GPE1(2),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//CAM_D(7)
    {S5PV210_GPE1(3),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//CAM_MCLK
    {S5PV210_GPE1(4),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//NC

	{S5PV210_GPF0(0),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_HSYNC
    {S5PV210_GPF0(1),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_VSYNC
    {S5PV210_GPF0(2),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_DE
    {S5PV210_GPF0(3),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_PCLK
    {S5PV210_GPF0(4),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_D(0)
    {S5PV210_GPF0(5),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_D(1)
    {S5PV210_GPF0(6),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_D(2)
    {S5PV210_GPF0(7),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_D(3)
	{S5PV210_GPF1(0),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_D(4)
    {S5PV210_GPF1(1),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_D(5)
    {S5PV210_GPF1(2),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_D(6)
    {S5PV210_GPF1(3),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_D(7)
    {S5PV210_GPF1(4),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_D(8)
    {S5PV210_GPF1(5),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_D(9)
    {S5PV210_GPF1(6),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_D(10)
    {S5PV210_GPF1(7),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_D(11)
	{S5PV210_GPF2(0),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_D(12)
    {S5PV210_GPF2(1),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_D(13)
    {S5PV210_GPF2(2),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_D(14)
    {S5PV210_GPF2(3),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_D(15)
    {S5PV210_GPF2(4),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_D(16)
    {S5PV210_GPF2(5),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_D(17)
    {S5PV210_GPF2(6),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_D(18)
    {S5PV210_GPF2(7),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_D(19)
	{S5PV210_GPF3(0),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_D(20)
    {S5PV210_GPF3(1),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_D(21)
    {S5PV210_GPF3(2),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_D(22)
    {S5PV210_GPF3(3),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_D(23)
	{S5PV210_GPF3(4),S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE}, 	//CODEC_LDO_EN,driver do this
    {S5PV210_GPF3(5),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC

	{S5PV210_GPG0(0),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//NAND_CLK
    {S5PV210_GPG0(1),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//NAND_CMD
    {S5PV210_GPG0(2),S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, 	//ALS_SCL_2.8V
    {S5PV210_GPG0(3),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//NAND_D(0)
    {S5PV210_GPG0(4),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//NAND_D(1)
    {S5PV210_GPG0(5),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//NAND_D(2)
    {S5PV210_GPG0(6),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//NAND_D(3)
	{S5PV210_GPG1(0),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//WLAN_SDIO_CLK
    {S5PV210_GPG1(1),S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, 	//WLAN_SDIO_CMD
    {S5PV210_GPG1(2),S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE}, 	//WLAN_nRST
    {S5PV210_GPG1(3),S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, 	//WLAN_SDIO_D(0)
    {S5PV210_GPG1(4),S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, 	//WLAN_SDIO_D(1)
    {S5PV210_GPG1(5),S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, 	//WLAN_SDIO_D(2)
    {S5PV210_GPG1(6),S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, 	//WLAN_SDIO_D(3)
	{S5PV210_GPG2(0),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//T_FLASH_CLK
    {S5PV210_GPG2(1),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//T_FLASH_CMD
    {S5PV210_GPG2(2),S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, 	//ALS_SDA_2.8V
    {S5PV210_GPG2(3),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//T_FLASH_D(0)
    {S5PV210_GPG2(4),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//T_FLASH_D(1)
    {S5PV210_GPG2(5),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//T_FLASH_D(2)
    {S5PV210_GPG2(6),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//T_FLASH_D(3)
	{S5PV210_GPG3(0),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_GPG3(1),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
   	{S5PV210_GPG3(2),S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE}, 	//REV03 : EARPATH_SEL REV04 : FLM_SEL
    {S5PV210_GPG3(3),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_UP}, 	//TA_CURRENT_SEL
    {S5PV210_GPG3(4),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//BT_WAKE
    {S5PV210_GPG3(5),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//WLAN_WAKE
    {S5PV210_GPG3(6),S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE}, 	//BT_nRST  

	{S5PV210_GPJ0(0),S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, 	//MSENSE_SCL_2.8V
    {S5PV210_GPJ0(1),S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, 	//MSENSE_SDA_2.8V
    {S5PV210_GPJ0(2),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE}, 	//HWREV_MODE0
    {S5PV210_GPJ0(3),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE}, 	//HWREV_MODE1
    {S5PV210_GPJ0(4),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE}, 	//HWREV_MODE2
    {S5PV210_GPJ0(5),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//TSP_INT
    {S5PV210_GPJ0(6),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//CAM_MEGA_EN
    {S5PV210_GPJ0(7),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE}, 	//HWREV_MODE3
	{S5PV210_GPJ1(0),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//PHONE_ON
    {S5PV210_GPJ1(1),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//VIBTONE_EN
    {S5PV210_GPJ1(2),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//CAM_VGA_nSTBY
    {S5PV210_GPJ1(3),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//TSP_LDO_ON
    {S5PV210_GPJ1(4),S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE}, 	//PS_ON
    {S5PV210_GPJ1(5),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//CAM_MEGA_nRST
	{S5PV210_GPJ2(0),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_GPJ2(1),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_GPJ2(2),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//OLED_DET
   	{S5PV210_GPJ2(3),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//CODEC_XTAL_EN
    {S5PV210_GPJ2(4),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//USIM_BOOT
    {S5PV210_GPJ2(5),S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_DOWN}, 	//REV03 : USB_SEL30 REV04 : EAR_MICBIAS_EN
	{S5PV210_GPJ2(6),S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE}, 	//REV03 : FLM_SEL REV04 : EARPATH_SEL		
    {S5PV210_GPJ2(7),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//MASSMEMORY_EN
	{S5PV210_GPJ3(0),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//3_TOUCH_SDA_2.8V
    {S5PV210_GPJ3(1),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//3_TOUCH_SCL_2.8V
    {S5PV210_GPJ3(2),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//3_TOUCH_EN
    {S5PV210_GPJ3(3),S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, 	//MSENSE_nRST
	{S5PV210_GPJ3(4),S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, 	//USB_SDA_2.8V
    {S5PV210_GPJ3(5),S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, 	//USB_SCL_2.8V
    {S5PV210_GPJ3(6),S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, 	//AP_SDA_2.8V
    {S5PV210_GPJ3(7),S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, 	//AP_SCL_2.8V
	{S5PV210_GPJ4(0),S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, 	//AP_PMIC_SDA
    {S5PV210_GPJ4(1),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//3_TOUCH_INT
	{S5PV210_GPJ4(2),S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE}, 	//MICBIAS_EN
    {S5PV210_GPJ4(3),S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, 	//AP_PMIC_SCL
    {S5PV210_GPJ4(4),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//TDMB_EN


	/* memory part */
	{S5PV210_MP01(0),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP01(1),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_nCS
    {S5PV210_MP01(2),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP01(3),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//OLED_ID
    {S5PV210_MP01(4),S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, 	//AP_NANDCS
    {S5PV210_MP01(5),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//DIC_ID
    {S5PV210_MP01(6),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP01(7),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
	{S5PV210_MP02(0),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP02(1),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP02(2),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE}, 	//PU, there is external pull-up
    {S5PV210_MP02(3),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
	{S5PV210_MP03(0),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP03(1),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP03(2),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_UP},    	//NC, must high
    {S5PV210_MP03(3),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//PDA_ACTIVE
    {S5PV210_MP03(4),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE}, 	//PU, there is external pull-up
    {S5PV210_MP03(5),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_UP}, 	//NC, must high
    {S5PV210_MP03(6),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP03(7),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
	{S5PV210_MP04(0),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP04(1),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_SCLK
    {S5PV210_MP04(2),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP04(3),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//LCD_SDI
    {S5PV210_MP04(4),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP04(5),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP04(6),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP04(7),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
	{S5PV210_MP05(0),S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, 	//FUEL_SCL_1.8V
    {S5PV210_MP05(1),S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, 	//FUEL_SDA_1.8V
    {S5PV210_MP05(2),S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, 	//AP_SCL_1.8V
    {S5PV210_MP05(3),S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, 	//AP_SDA_1.8V
    {S5PV210_MP05(4),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//TDMB_RST_N
    {S5PV210_MP05(5),S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, 	//MLCD_RST
    {S5PV210_MP05(6),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP05(7),S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE}, 	//UART_SEL
	{S5PV210_MP06(0),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP06(1),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP06(2),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP06(3),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP06(4),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP06(5),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP06(6),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP06(7),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
	{S5PV210_MP07(0),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP07(1),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//NC 	
    {S5PV210_MP07(2),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP07(3),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP07(4),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP07(5),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP07(6),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
    {S5PV210_MP07(7),S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//NC
	/* Memory part ending and off part ending */
};



//	alive part GPIO Sleep Control table
//	{pin number,      sleep mode conf, sleep pin value,      sleep pullup/down config}
static unsigned int sleep_alive_gpio_table[][4] =
{
	{S5PV210_GPH0(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, //ACC_INT
	{S5PV210_GPH0(3), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, //BUCK_1_EN_A
	{S5PV210_GPH0(4), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, //BUCK_1_EN_B
	{S5PV210_GPH0(5), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, //BUCK2_EN
	//{S5PV210_GPH0(7), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, //PMIC_IRQ

	{S5PV210_GPH1(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, //NC	
	{S5PV210_GPH1(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, //TDMB_INT
	//{S5PV210_GPH1(4), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, //CODEC_XTAL_EN
	{S5PV210_GPH1(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, //NC
	{S5PV210_GPH1(6), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, //NC
	{S5PV210_GPH1(7), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, //NC

	{S5PV210_GPH2(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, //NC
	{S5PV210_GPH2(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, //NC
	{S5PV210_GPH2(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, //NC

//	{S5PV210_GPH3(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, //NC
	{S5PV210_GPH3(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, //NC
	{S5PV210_GPH3(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, //NC
	{S5PV210_GPH3(7), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ONE,  S3C_GPIO_PULL_NONE},	//GPIO_CP_RST
};

#endif

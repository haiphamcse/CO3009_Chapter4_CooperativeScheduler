/*
 * global.c
 *
 *  Created on: Nov 15, 2022
 *      Author: PC
 */

#include "global.h"

//5 LED
//5 Delay (cycle khac nhau)
/*
 * LED1 one shot (delay tu chon) -> Task Delete
 * 4LEDs with different cycle
 * */

void led0()
{
	HAL_GPIO_TogglePin(GPIOA, OUT1_Pin);
}

void led1()
{
	HAL_GPIO_TogglePin(GPIOA, OUT2_Pin);
}

void led2()
{
	HAL_GPIO_TogglePin(GPIOA, OUT3_Pin);
}

void led3()
{
	HAL_GPIO_TogglePin(GPIOA, OUT4_Pin);
}

void led4()
{
	HAL_GPIO_TogglePin(GPIOA, OUT5_Pin);
}


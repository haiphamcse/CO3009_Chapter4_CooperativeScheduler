/*
 * fsm.c
 *
 *  Created on: Nov 26, 2022
 *      Author: PC
 */

#include "fsm.h"

void led()
{
	HAL_GPIO_TogglePin(GPIOA, OUT5_Pin);
}

void toggle()
{
	if(isButtonPressed(0) == 1)
	{
		HAL_GPIO_TogglePin(GPIOA, OUT4_Pin);
	}
}

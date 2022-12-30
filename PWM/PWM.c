/*
 * PWM.c
 *
 *  Created on: Mar 18, 2019
 *      Author: mh
 */

#include "../include.h"
#include "PWM.h"
static uint32_t Period;
extern void config_PWM(void)
{

   Period = SysCtlClockGet()/50; // lay xung cua he thong chi cho tan so cua PWM
   SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
   GPIOPinTypePWM(GPIO_PORTF_BASE,GPIO_PIN_1);  // cau hinh port F, pin 1 la PWM

   SysCtlPWMClockSet(SYSCTL_PWMDIV_1); // clock he thong la 80Mhz , chia cho 1 ra clock cua PWM la 80Mhz
   SysCtlPeripheralEnable(SYSCTL_PERIPH_PWM1);
   GPIOPinConfigure(GPIO_PF1_M1PWM5);

   PWMGenConfigure(PWM1_BASE,PWM_GEN_2,PWM_GEN_MODE_DOWN|PWM_GEN_MODE_NO_SYNC);
   PWMGenPeriodSet(PWM1_BASE,PWM_GEN_2,Period);

   PWMGenEnable(PWM1_BASE,PWM_GEN_2);
}

extern void process_PWM(void)
{
 PWMPulseWidthSet(PWM1_BASE,PWM_OUT_5,Period*10/100-1);
 PWMOutputState(PWM1_BASE,PWM_OUT_5_BIT,true);

}







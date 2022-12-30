/*
 * GPIO.c
 *
 *  Created on: Mar 18, 2019
 *      Author: mh
 */


/*#include "../include.h"
#include "GPIO.h"



extern void Config_LED(void)
{

    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    GPIOPinTypeGPIOOutput(LED_PORT,LED);
    GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1,0);

}

extern void  Chop_tat(void)
{
    static uint8_t i;
    if(i==0)
        i=LED;
    else
        i=0;
    GPIOPinWrite(LED_PORT,LED,i);
   // SysCtlDelay(SysCtlClockGet()/3); //delay 1s

}


extern void  dong_co(void)
{
    GPIOPinWrite(LED_PORT,LED,LED);
    SysCtlDelay((SysCtlClockGet())/2000);
    GPIOPinWrite(LED_PORT,LED,0);
    SysCtlDelay(493827);
    //SysCtlDelay((SysCtlClockGet())/3);
}

*/


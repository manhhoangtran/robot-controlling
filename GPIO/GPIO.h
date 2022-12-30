/*
 * GPIO.h
 *
 *  Created on: Mar 18, 2019
 *      Author: mh
 */

#ifndef GPIO_GPIO_H_
#define GPIO_GPIO_H_

#define LED_PORT GPIO_PORTF_BASE
#define LED      GPIO_PIN_1

extern void Config_LED(void);
extern void  Chop_tat(void);
extern void dong_co(void);




#endif /* GPIO_GPIO_H_ */

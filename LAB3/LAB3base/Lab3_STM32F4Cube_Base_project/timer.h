/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __timer_H
#define __timer_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"
	 
/* Prototypes ----------------------------------------------------------------*/
void initTimer();
void setLedIntensity(uint32_t duty, uint32_t channel);

#ifdef __cplusplus
}
#endif
#endif /*__ timer_H */
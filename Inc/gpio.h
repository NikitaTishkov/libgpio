//
// Created by mykyta.tishkov on 03.04.2022.
//

#ifndef ALBUS_FELES_GPIO_H
#define ALBUS_FELES_GPIO_H
#include <stdbool.h>
#include "../../Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal.h"

struct gpio_t
{
    uint32_t pin;
    GPIO_TypeDef *port;
    uint32_t mode;
    uint32_t pull;
    uint32_t speed;
    uint32_t alternate;
};

void gpio_init(struct gpio_t *PL_gpio);
void gpio_deinit(struct gpio_t *PL_gpio);

void gpio_write(struct gpio_t *PL_gpio, bool bL_pin_state);
bool gpio_read(struct gpio_t *PL_gpio);
void gpio_toggle(struct gpio_t *PL_gpio);


#endif //ALBUS_FELES_GPIO_H

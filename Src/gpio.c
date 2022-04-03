//
// Created by mykyta.tishkov on 03.04.2022.
//

#include "../Inc/gpio.h"
void gpio_init(struct gpio_t *PL_gpio)
{
    GPIO_InitTypeDef GPIO_InitStruct = {0};

    GPIO_InitStruct.Pin = PL_gpio->pin;
    GPIO_InitStruct.Mode = PL_gpio->mode;
    GPIO_InitStruct.Pull = PL_gpio->pull;
    GPIO_InitStruct.Speed = PL_gpio->speed;
    GPIO_InitStruct.Alternate = PL_gpio->alternate;
    HAL_GPIO_Init(PL_gpio->port, &GPIO_InitStruct);
}

void gpio_deinit(struct gpio_t *PL_gpio)
{
    HAL_GPIO_DeInit(PL_gpio->port, PL_gpio->pin);
}

void gpio_write(struct gpio_t *PL_gpio, bool bL_pin_state)
{
    HAL_GPIO_WritePin(PL_gpio->port, PL_gpio->pin, bL_pin_state);
}

bool gpio_read(struct gpio_t *PL_gpio)
{
    bool bL_pin_state = HAL_GPIO_ReadPin(PL_gpio->port, PL_gpio->pin);
}

void gpio_toggle(struct gpio_t *PL_gpio)
{
    HAL_GPIO_TogglePin(PL_gpio->port, PL_gpio->pin);
}
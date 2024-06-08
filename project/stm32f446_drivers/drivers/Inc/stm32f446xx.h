/*
 * stm32f446xx.h
 *
 *  Created on: Jun 7, 2024
 *      Author: z0976
 */

#ifndef INC_STM32F446XX_H_
#define INC_STM32F446XX_H_

#include<stdint.h>

#define __vo volatile
#define __weak __attribute__((weak))

/*
 * Base address of Flash and SRAM memories
 */

#define FLASH_BASEADDR					0x08000000U
#define SRAM1_BASEADDR					0x20000000U
#define SRAM2_BASEADDR					0x20001C00U
#define ROM_BASEADDR					0x1FFF0000U
#define SRAM							SRAM1_BASEADDR1

/*
 * AHBx and APBx Bus Peripheral base address
 */

#define PERIPH_BASEADDR					0x40000000U
#define APB1PERIPH_BASEADDR				PERIPH_BASE
#define APB2PERIPH_BASEADDR				0x40010000U
#define AHB1PERIPH_BASEADDR				0x40020000U
#define AHB2PERIPH_BASEADDR				0x50000000U

/*
 * Base address of peripheral on AHB1 bus
 */

#define GPIOA_BASEADDR					(AHB1PERIPH_BASE + 0x0000)
#define GPIOB_BASEADDR					(AHB1PERIPH_BASE + 0x0400)
#define GPIOC_BASEADDR					(AHB1PERIPH_BASE + 0x0800)
#define GPIOD_BASEADDR					(AHB1PERIPH_BASE + 0x0C00)
#define GPIOE_BASEADDR					(AHB1PERIPH_BASE + 0x1000)
#define GPIOF_BASEADDR					(AHB1PERIPH_BASE + 0x1400)
#define GPIOG_BASEADDR					(AHB1PERIPH_BASE + 0x1800)
#define GPIOH_BASEADDR					(AHB1PERIPH_BASE + 0x1C00)
#define GPIOI_BASEADDR					(AHB1PERIPH_BASE + 0x2000)

/*
 * Base addres of peripheral on APB1 bus
 *
 */
#define I2C1_BASEADDR						(APB1PERIPH_BASEADDR + 0x5400)
#define I2C2_BASEADDR						(APB1PERIPH_BASEADDR + 0x5800)
#define I2C3_BASEADDR						(APB1PERIPH_BASEADDR + 0x5C00)

#define SPI2_BASEADDR						(APB1PERIPH_BASEADDR + 0x3800)
#define SPI3_BASEADDR						(APB1PERIPH_BASEADDR + 0x3C00)

#define USART2_BASEADDR						(APB1PERIPH_BASEADDR + 0x4400)
#define USART3_BASEADDR						(APB1PERIPH_BASEADDR + 0x4800)
#define UART4_BASEADDR						(APB1PERIPH_BASEADDR + 0x4C00)
#define UART5_BASEADDR						(APB1PERIPH_BASEADDR + 0x5000)

/*
 * Base addres of peripheral on APB2 bus
 */

#define EXTI_BASEADDR						(APB2PERIPH_BASEADDR + 0x3C00)
#define SPI1_BASEADDR						(APB2PERIPH_BASEADDR + 0x3000)
#define SYSCFG_BASEADDR        				(APB2PERIPH_BASEADDR + 0x3800)
#define USART1_BASEADDR						(APB2PERIPH_BASEADDR + 0x1000)
#define USART6_BASEADDR						(APB2PERIPH_BASEADDR + 0x1400)

/*
 * GPIO struct
 */

typedef struct
{
	__vo uint32_t MODER;                        /*!< GPIO port mode register,                    	Address offset: 0x00      */
	__vo uint32_t OTYPER;                       /*!< TODO,     										Address offset: 0x04      */
	__vo uint32_t OSPEEDR;
	__vo uint32_t PUPDR;
	__vo uint32_t IDR;
	__vo uint32_t ODR;
	__vo uint32_t BSRR;
	__vo uint32_t LCKR;
	__vo uint32_t AFR[2];					 /*!< AFR[0] : GPIO alternate function low register, AF[1] : GPIO alternate function high register    		Address offset: 0x20-0x24 */
}GPIO_RegDef_t;



#endif /* INC_STM32F446XX_H_ */

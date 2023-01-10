/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_Pin GPIO_PIN_13
#define LED_GPIO_Port GPIOC
#define KEY_Pin GPIO_PIN_0
#define KEY_GPIO_Port GPIOA
#define KEY_EXTI_IRQn EXTI0_IRQn
#define KEY_1_Pin GPIO_PIN_1
#define KEY_1_GPIO_Port GPIOA
#define AI_1_Pin GPIO_PIN_4
#define AI_1_GPIO_Port GPIOA
#define AI_2_Pin GPIO_PIN_5
#define AI_2_GPIO_Port GPIOA
#define AO_1_Pin GPIO_PIN_12
#define AO_1_GPIO_Port GPIOB
#define AO_2_Pin GPIO_PIN_13
#define AO_2_GPIO_Port GPIOB
#define BO_1_Pin GPIO_PIN_14
#define BO_1_GPIO_Port GPIOB
#define BO_2_Pin GPIO_PIN_15
#define BO_2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

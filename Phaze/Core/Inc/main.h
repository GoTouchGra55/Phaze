/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define I_SENSE_A_Pin GPIO_PIN_3
#define I_SENSE_A_GPIO_Port GPIOC
#define I_SENSE_B_Pin GPIO_PIN_0
#define I_SENSE_B_GPIO_Port GPIOA
#define I_SENSE_C_Pin GPIO_PIN_2
#define I_SENSE_C_GPIO_Port GPIOA
#define DCV_SENSE_Pin GPIO_PIN_3
#define DCV_SENSE_GPIO_Port GPIOA
#define DRV_SCK_Pin GPIO_PIN_5
#define DRV_SCK_GPIO_Port GPIOA
#define DRV_MISO_Pin GPIO_PIN_6
#define DRV_MISO_GPIO_Port GPIOA
#define DRV_MOSI_Pin GPIO_PIN_7
#define DRV_MOSI_GPIO_Port GPIOA
#define DRV_CS_Pin GPIO_PIN_0
#define DRV_CS_GPIO_Port GPIOB
#define NFAULT_Pin GPIO_PIN_10
#define NFAULT_GPIO_Port GPIOB
#define IN_LA_Pin GPIO_PIN_13
#define IN_LA_GPIO_Port GPIOB
#define IN_LB_Pin GPIO_PIN_14
#define IN_LB_GPIO_Port GPIOB
#define IN_LC_Pin GPIO_PIN_15
#define IN_LC_GPIO_Port GPIOB
#define ENABLE_Pin GPIO_PIN_8
#define ENABLE_GPIO_Port GPIOC
#define IN_HA_Pin GPIO_PIN_8
#define IN_HA_GPIO_Port GPIOA
#define IN_HB_Pin GPIO_PIN_9
#define IN_HB_GPIO_Port GPIOA
#define IN_HC_Pin GPIO_PIN_10
#define IN_HC_GPIO_Port GPIOA
#define ENC_SCK_Pin GPIO_PIN_10
#define ENC_SCK_GPIO_Port GPIOC
#define ENC_MISO_Pin GPIO_PIN_11
#define ENC_MISO_GPIO_Port GPIOC
#define ENC_MOSI_Pin GPIO_PIN_12
#define ENC_MOSI_GPIO_Port GPIOC
#define ENC__CS_Pin GPIO_PIN_3
#define ENC__CS_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

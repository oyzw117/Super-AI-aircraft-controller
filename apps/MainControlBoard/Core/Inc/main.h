/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#include "stm32l1xx_hal.h"

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
#define ACCEL_ADDR_Pin GPIO_PIN_0
#define ACCEL_ADDR_GPIO_Port GPIOC
#define GYRO_ADDR_Pin GPIO_PIN_1
#define GYRO_ADDR_GPIO_Port GPIOC
#define INT1_ACCEL_Pin GPIO_PIN_2
#define INT1_ACCEL_GPIO_Port GPIOC
#define INT2_ACCEL_Pin GPIO_PIN_3
#define INT2_ACCEL_GPIO_Port GPIOC
#define GPS_TX_Pin GPIO_PIN_2
#define GPS_TX_GPIO_Port GPIOA
#define GPS_RX_Pin GPIO_PIN_3
#define GPS_RX_GPIO_Port GPIOA
#define INT3_GYRO_Pin GPIO_PIN_4
#define INT3_GYRO_GPIO_Port GPIOC
#define INT4_GYRO_Pin GPIO_PIN_5
#define INT4_GYRO_GPIO_Port GPIOC
#define BLE_TX_Pin GPIO_PIN_10
#define BLE_TX_GPIO_Port GPIOB
#define BLE_RX_Pin GPIO_PIN_11
#define BLE_RX_GPIO_Port GPIOB
#define SPI2_CS_Pin GPIO_PIN_12
#define SPI2_CS_GPIO_Port GPIOB
#define GPS_PPS_Pin GPIO_PIN_8
#define GPS_PPS_GPIO_Port GPIOC
#define GPS_WAKE_Pin GPIO_PIN_9
#define GPS_WAKE_GPIO_Port GPIOC
#define DEUBG_TX_Pin GPIO_PIN_9
#define DEUBG_TX_GPIO_Port GPIOA
#define DEBUG_RX_Pin GPIO_PIN_10
#define DEBUG_RX_GPIO_Port GPIOA
#define GPS_NRST_Pin GPIO_PIN_10
#define GPS_NRST_GPIO_Port GPIOC
#define LED_STATE_Pin GPIO_PIN_2
#define LED_STATE_GPIO_Port GPIOD

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */


/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef I2CDRIVER_H
#define I2CDRIVER_H

// Select environment: uncomment one of the following
#define TEST_ENVIRONMENT
// #define PHYSICAL_ENVIRONMENT


#if defined(PHYSICAL_ENVIRONMENT)
#include "stm32h7xx_hal.h"
#else
#include <stdint.h>
#endif


typedef signed char     SHORTINT;
typedef unsigned char   BYTE;
typedef signed short    INTEGER;
typedef unsigned short  WORD;
typedef signed int      LONGINT;
typedef unsigned int    LONGWORD;


//i2c functions
#if defined(PHYSICAL_ENVIRONMENT)
extern I2C_HandleTypeDef hi2c1;
extern I2C_HandleTypeDef hi2c2;

void MX_I2C1_Init(void);
void MX_I2C2_Init(void);

//i2cr functions
void MngI2CR_Init(void);
HAL_StatusTypeDef WriteI2CR_ToRegister(uint16_t device_address, uint16_t register_address, uint8_t* tx_data, uint16_t size);
HAL_StatusTypeDef ReadI2CR_FromRegister(uint16_t device_address, uint16_t register_address, uint8_t* rx_data, uint16_t size);
#endif


#endif //I2CDRIVER_H

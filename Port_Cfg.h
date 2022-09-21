 /******************************************************************************
 *
 * Module: PORT
 *
 * File Name: Port_Cfg.h
 *
 * Description: Pre-Compile Configuration Header file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Abdelrahman Leithy 
 ******************************************************************************/

#ifndef PORT_CFG_H
#define PORT_CFG_H

/*
 * Module Version 1.0.0
 */
#define PORT_CFG_SW_MAJOR_VERSION              (1U)
#define PORT_CFG_SW_MINOR_VERSION              (0U)
#define PORT_CFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_CFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_CFG_AR_RELEASE_PATCH_VERSION     (3U)

/* Pre-compile option for Development Error Detect */  
#define PORT_DEV_ERROR_DETECT              STD_ON 


/* Pre-compile option for SET_PIN_DIRECTION Info API */ 
#define PORT_SET_PIN_DIRECTION_API         STD_ON 

/* Pre-compile option for SET_PIN_MODE Info API */ 
#define PORT_SET_PIN_MODE_API              STD_ON   

/* Pre-compile option for Version Info API */
#define PORT_VERSION_INFO_API              STD_ON   

/* Number of configured port_pin channels */  
#define  CONFIGURED_PORT_PINS           (43U)   
#define  MAX_PIN_NUM                     (42U)  
#define  MIN_PIN_NUM                      (0U) 
#define  MAX_MODE                          (10U) 
#define  MIN_MODE                           (0U) 
/* Modes for port drivers */ 

#define  PORT_PIN_MODE_ADC        (0U) 
#define  PORT_PIN_MODE_UART0      (1U) 
#define  PORT_PIN_MODE_SSI3       (1U)
#define  PORT_PIN_MODE_SSI2       (2U) 
#define  PORT_PIN_MODE_UART1      (2U)  
#define  PORT_PIN_MODE_I2C        (3U)  
#define  PORT_PIN_MODE_M0PWM      (4U) 
#define  PORT_PIN_MODE_M1PWM      (5U)  
#define  PORT_PIN_MODE_QEI        (6U)  
#define  PORT_PIN_MODE_GPT        (7U)   
#define  PORT_PIN_MODE_CAN        (8U) 
#define  PORT_PIN_MODE_USB        (8U)  
#define  PORT_PIN_MODE_DIO       (10U) 

/* PORTS NUM */ 
#define PORT_PortA               (0U) 
#define PORT_PortB               (1U)  
#define PORT_PortC               (2U)  
#define PORT_PortD               (3U)  
#define PORT_PortE               (4U) 
#define PORT_PortF              (5U) 

/* PIN NUMS */ 
#define  PORT_Pin0              (0U) 
#define  PORT_Pin1              (1U) 
#define  PORT_Pin2              (2U)  
#define  PORT_Pin3              (3U) 
#define  PORT_Pin4              (4U) 
#define  PORT_Pin5              (5U) 
#define  PORT_Pin6              (6U) 
#define  PORT_Pin7              (7U)  


#define PORT_PIN_LEVEL_LOW   STD_LOW 
#define PORT_PIN_LEVEL_HIGH  STD_HIGH   


#endif /* PORT_CFG*/    
 
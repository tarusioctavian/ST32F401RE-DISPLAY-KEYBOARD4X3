

#ifndef __i2c_H
#define __i2c_H
//#include "stm32f7xx.h"                  // Device header

#include "stm32f4xx.h"                  // Device header
#include "delay.h"
#include <stdint.h>
#include "stdio.h"
void i2c_init(void);
char i2c_readByte(char saddr,char maddr,char *data);
void i2c_writeByte(char saddr,char maddr,char data);
void i2c_WriteMulti(char saddr,char maddr,char *buffer, uint8_t length);
void i2c_ReadMulti(char saddr,char maddr, int n, char* data);
void i2c_bus_scan(void);
#endif


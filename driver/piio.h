
/*
 ============================================================================
 Name        : piio.h - the header file with four IO controls
 Author      : Dr Abdul Razaq
 Version     : 0.1
 Copyright   : See Abertay copyright notice
 Description : RPi Zero Wireless - GPIO Driver - User space application must include this header file
 ============================================================================
 */
#ifndef PIIO_H
#define PIIO_H

#include <linux/ioctl.h>

typedef struct lkm_data {
	unsigned char data[256];
	unsigned long len;
	char type;
} lkm_data;

typedef struct gpio_pin {
	char desc[16];
	unsigned int pin;
	int value;
	char opt;
} gpio_pin;

#define IOCTL_PIIO_READ 0x65
#define IOCTL_PIIO_WRITE 0x66
#define IOCTL_PIIO_GPIO_READ 0x67
#define IOCTL_PIIO_GPIO_WRITE 0x68

#define  DEVICE_NAME "piiodev"
#define  CLASS_NAME  "piiocls"

#endif

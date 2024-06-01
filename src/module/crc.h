/*
 * crc.h
 *
 *  Created on: 2024/06/01
 *      Author: aquryle
 */
#include "iodefine.h"
#include "common.h"

#ifndef MODULE_CRC_H_
#define MODULE_CRC_H_

#define CRC8_ATM_INITIAL	(0x00u)
#define CRC16_USB_INITIAL	(0xFFFFu)
#define CRC16_CCITT_INITIAL	(0x1D0Fu)

#define CRC8_ATM_POLY		(0x07u)
#define CRC16_USB_POLY		(0x8005u)
#define CRC16_CCITT_POLY	(0x1021u)


//! CRC演算のアルゴリズム
typedef enum {
	crc8_atm = 0x01,	// x^8 + x^2 + x + 1
	crc16_usb = 0x02,	// x^16 + x^15 + x^2 + 1
	crc16_ccitt = 0x03,	// x^16 + x^12 + x^5 + 1
} CRC_Algorithm;


extern void crc_reset(CRC_Algorithm argo, uint16_t init);
extern void crc_input(uint8_t data);
extern uint16_t crc_output(void);



#endif /* MODULE_CRC_H_ */

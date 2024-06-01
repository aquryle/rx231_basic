/*
 * crc.c
 *
 *  Created on: 2024/06/01
 *      Author: aquryle
 */

#include "crc.h"

static CRC_Algorithm selected_argorithm;

void crc_reset(CRC_Algorithm argo, uint16_t init)
{
	uint8_t tmp = 0;

	// 計算方法指定
	tmp = 0x84;		// CRCDORクリア、MSB用
	tmp &= argo;	// アルゴリズム指定
	CRC.CRCCR.BYTE = tmp;

	// 初期値設定
	if (crc8_atm == init)	CRC.CRCDOR = (uint8_t)init;
	else					CRC.CRCDOR = init;

	// 計算中のアルゴリズムを保存
	selected_argorithm = argo;
}


void crc_input(uint8_t data)
{
	CRC.CRCDIR = data;
}


uint16_t crc_output(void)
{
	uint16_t crc = CRC.CRCDOR;

	// 8ビットで計算中のときは、上位ビットをクリアする
	if (crc8_atm == selected_argorithm) crc &= 0x00FF;

	return crc;
}



#ifdef DEBUGGING
volatile uint16_t result_crc8;
volatile uint16_t result_crc16u;
volatile uint16_t result_crc16c;

void crc_test(void)
{
	uint8_t i;

	crc_reset(crc8_atm, CRC8_ATM_INITIAL);
	for (i = 0; i <10; i++) {
		crc_input(i);
	}
	result_crc8 = (uint8_t)crc_output();

	crc_reset(crc16_usb, CRC16_USB_INITIAL);
	for (i = 0; i <10; i++) {
		crc_input(i);
	}
	result_crc16u = crc_output();

	crc_reset(crc16_ccitt, CRC16_CCITT_INITIAL);
	for (i = 0; i <10; i++) {
		crc_input(i);
	}
	result_crc16c = crc_output();
}
#endif

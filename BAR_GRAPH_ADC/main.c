/*
 * main.c
 *
 *  Created on: Sep 24, 2022
 *      Author: abdo_
 */


#include <avr/io.h>
#include <util/delay.h>
#include "LIB/bit_math.h"
#include "LIB/std_types.h"
#include "MCAL/DIO_INTERFACE.h"
#include "ADC/ADC_INTERFACE.h"
#include "ADC/ADC_CONFIG.h"
#include "LCD/LCD_INTERFACE.h"
#include "GIE/GIE_INTERFACE.h"

#if 0
void A_LED(void){
	u16 T;
		DIO_vWritePortDirection(DIO_PORTC,0xff);
			DIO_vWritePortVALUE(DIO_PORTC,0x00);
	T=ADC_u16Read(0b00000);
			if(T>0 && T<127){
				DIO_vWritePortVALUE(DIO_PORTC,0x01);
			}else if(T<255 && T>127){


				DIO_vWritePortVALUE(DIO_PORTC,0x03);

			}else if(T<383 && T>255){

				DIO_vWritePortVALUE(DIO_PORTC,0x07);
			}else if(T<511 && T>383){

				DIO_vWritePortVALUE(DIO_PORTC,0x0f);
			}else if(T<639 && T>511){

				DIO_vWritePortVALUE(DIO_PORTC,0x1f);
			}else if(T<767 && T>639){

				DIO_vWritePortVALUE(DIO_PORTC,0x3f);

			}else if(T<895 && T>767){

				DIO_vWritePortVALUE(DIO_PORTC,0x7f);

			}else if(T<1023 && T>895){

				DIO_vWritePortVALUE(DIO_PORTC,0xff);

			}

}
#endif
/* BAR GRAPH ALGORITHM
 * LEVELS
 * 1---->1--------->0x01
 * 3---->11--------->0x03
 * 7---->111 --------->0x07
 * 15---->1111--------->0x0f
 * 31---->11111--------->0x1f
 * 63---->111111--------->0x3f
 * 127---->1111111--------->0x7f
 * 255---->11111111--------->0xff
 * *******************************************
 * ADC READ 10 BIT AND WE HAVE 8 LEVELS TO OUTPUT should shift adc by 3
 * level=(ADC>>3)/128
 * OUT=(2<<level)-1			(2**n - 1)			(2<<level==2**level)
 * */
u16 T;
int main(void){

	//LCD_INIT();
		DIO_vWritePortDirection(DIO_PORTC,0xff);
		DIO_vWritePortVALUE(DIO_PORTC,0x00);
		ADC_vInit();







		DIO_vWritePortDirection(DIO_PORTC,0xff);
		DIO_vWritePortVALUE(DIO_PORTC,0x00);




	while(1){




			T=ADC_u16Read(0b00000);
					if(T>0 && T<127){
						DIO_vWritePortVALUE(DIO_PORTC,0x01);
					}else if(T<255 && T>127){


						DIO_vWritePortVALUE(DIO_PORTC,0x03);

					}else if(T<383 && T>255){

						DIO_vWritePortVALUE(DIO_PORTC,0x07);
					}else if(T<511 && T>383){

						DIO_vWritePortVALUE(DIO_PORTC,0x0f);
					}else if(T<639 && T>511){

						DIO_vWritePortVALUE(DIO_PORTC,0x1f);
					}else if(T<767 && T>639){

						DIO_vWritePortVALUE(DIO_PORTC,0x3f);

					}else if(T<895 && T>767){

						DIO_vWritePortVALUE(DIO_PORTC,0x7f);

					}else if(T<1023 && T>895){

						DIO_vWritePortVALUE(DIO_PORTC,0xff);

					}





	}





}

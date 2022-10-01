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

/*
 * Copyright (c) 2015, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "board.h"
#include "fsl_device_registers.h"

unsigned int count;
unsigned int count1;

char str[5]={'0','0','0','0','0'};

void delay(unsigned int n)
{
	unsigned int i = 0;
	unsigned int j;
	for(i=0; i<n; i++)
	{
		j++;
	}

	count++;
}

void delaydark(unsigned int n)
{
	unsigned int i = 0;
	unsigned int j;
	for(i=0; i<n; i++)
	{
		j++;
	}

	count1++;
}

void alphabet()
{
	if(str[0]=='.' && str[1]=='-' && str[2]=='0' &&str[3]=='0' &&str[4]=='0')
	{printf("A \n");}
	else if(str[0]=='-' && str[1]=='.' && str[2]=='.' && str[3]=='.' && str[4]=='0')
	{printf("B \n");}
	else if(str[0]=='-' && str[1]=='.' && str[2]=='-' && str[3]=='.' && str[4]=='0')
	{printf("C \n");}
	else if(str[0]=='-' && str[1]=='.' && str[2]=='.' && str[3]=='0' && str[4]=='0')
	{printf("D \n");}
	else if(str[0]=='.' && str[1]=='0' && str[2]=='0' &&str[3]=='0' &&str[4]=='0' )
	{printf("E \n");}
	else if(str[0]=='.' && str[1]=='.' && str[2]=='-' && str[3]=='.' && str[4]=='0')
	{printf("F \n");}
	else if(str[0]=='-' && str[1]=='-' && str[2]=='.' && str[3]=='0' && str[4]=='0')
	{printf("G \n");}
	else if(str[0]=='.' && str[1]=='.' && str[2]=='.' && str[3]=='.' && str[4]=='0')
	{printf("H \n");}
	else if(str[0]=='.' && str[1]=='.' && str[2]=='0' && str[3]=='.' && str[4]=='0')
	{printf("I \n");}
	else if(str[0]=='.' && str[1]=='-' && str[2]=='-' && str[3]=='-' && str[4]=='0')
	{printf("J \n");}
	else if(str[0]=='-' && str[1]=='.' && str[2]=='-' && str[3]=='0' && str[4]=='0')
	{printf("K \n");}
	else if(str[0]=='.' && str[1]=='-' && str[2]=='.' && str[3]=='.' && str[4]=='0')
	{printf("L \n");}
	else if(str[0]=='-' && str[1]=='-' && str[2]=='0'&& str[3]=='0' && str[4]=='0')
	{printf("M \n");}
	else if(str[0]=='-' && str[1]=='.' && str[2]=='\0'&& str[3]=='0' && str[4]=='0')
	{printf("N \n");}
	else if(str[0]=='-' && str[1]=='-' && str[2]=='-' && str[3]=='0' && str[4]=='0')
	{printf("O \n");}
	else if(str[0]=='.' && str[1]=='-' && str[2]=='-' && str[3]=='.' && str[4]=='0')
	{printf("P \n");}
	else if(str[0]=='-' && str[1]=='-' && str[2]=='.' && str[3]=='-' && str[4]=='0')
	{printf("Q \n");}
	else if(str[0]=='.' && str[1]=='-' && str[2]=='.' && str[3]=='0' && str[4]=='0')
	{printf("R \n");}
	else if(str[0]=='.' && str[1]=='.' && str[2]=='.' && str[3]=='0' && str[4]=='0')
	{printf("S \n");}
	else if(str[0]=='-' && str[1]=='0' && str[2]=='0' && str[3]=='0' && str[4]=='0')
	{printf("T \n");}
	else if(str[0]=='.' && str[1]=='.' && str[2]=='-' && str[3]=='0' && str[4]=='0')
	{printf("U \n");}
	else if(str[0]=='.' && str[1]=='.' && str[2]=='.' && str[3]=='-' && str[4]=='0')
	{printf("V \n");}
	else if(str[0]=='.' && str[1]=='-' && str[2]=='-' && str[3]=='0' && str[4]=='0')
	{printf("W \n");}
	else if(str[0]=='-' && str[1]=='.' && str[2]=='.' && str[3]=='-' && str[4]=='0')
	{printf("X \n");}
	else if(str[0]=='-' && str[1]=='.' && str[2]=='-' && str[3]=='-' && str[4]=='0')
	{printf("Y \n");}
	else if(str[0]=='-' && str[1]=='-' && str[2]=='.' && str[3]=='.' && str[4]=='0')
	{printf("Z \n");}
	else if(str[0]=='.' && str[1]=='-' && str[2]=='-' && str[3]=='-' && str[4]=='-')
	{printf("1 \n");}
	else if(str[0]=='.' && str[1]=='.' && str[2]=='-' && str[3]=='-' && str[4]=='-')
	{printf("2 \n");}
	else if(str[0]=='.' && str[1]=='.' && str[2]=='.' && str[3]=='-' && str[4]=='-')
	{printf("3 \n");}
	else if(str[0]=='.' && str[1]=='.' && str[2]=='.' && str[3]=='.' && str[4]=='-')
	{printf("4 \n");}
	else if(str[0]=='.' && str[1]=='.' && str[2]=='.' && str[3]=='.' && str[4]=='.')
	{printf("5 \n");}
	else if(str[0]=='-' && str[1]=='.' && str[2]=='.' && str[3]=='.' && str[4]=='.')
	{printf("6 \n");}
	else if(str[0]=='-' && str[1]=='-' && str[2]=='.' && str[3]=='.' && str[4]=='.')
	{printf("7 \n");}
	else if(str[0]=='-' && str[1]=='-' && str[2]=='-' && str[3]=='.' && str[4]=='.')
	{printf("8 \n");}
	else if(str[0]=='-' && str[1]=='-' && str[2]=='-' && str[3]=='-' && str[4]=='.')
	{printf("9 \n");}
	else if(str[0]=='-' && str[1]=='-' && str[2]=='-' && str[3]=='-' && str[4]=='-')
	{printf("0 \n");}

}
/*
void value(int k, int l)

{	unsigned int ai=0;
	if(k>20000 && k<30000)//dot
			{
				str[ai]='.';
				ai++;
			}
			else if(k>70000 && k<80000){//dash
				str[ai]='-';
				ai++;
			}

			if(l>100000 && l<110000){//delay between alphabets
				str[ai]='\0';
				alphabet(str);
				str[0]='\0';
				ai=0;
			}
			else if(l>270000 && l<300000){//delay between words
				printf("\n");
				str[0]='\0';
				ai=0;
			}
}*/
int main(void)
{
	unsigned short cal_v = 0;
	unsigned char light_val = 0;

	unsigned long int n=0,ai=0;
	unsigned long int m=0,k=0,l=0;



	hardware_init(); // Do clock setup stuff.
	// Clock Gating
	SIM_SCGC5 |= (1<<13); // Enable Light Sensor I/O Port

	SIM_SCGC5 |= (1<<12);
	SIM_SCGC6 |= (1<<27); // Enable ADC Module

	// Setup Timer
	 SIM_SCGC6 |= (1 << 24); // Clock Enable TPM0
	 SIM_SOPT2 |= (0x2 << 24); // Set TPMSRC to OSCERCLK


	// Setup Analog Input - Default is analog (PTE22), No need to do anything.

	// Setup LED Pin for GPIO
	PORTD_PCR5 &= ~0x700; // Clear First
	PORTD_PCR5 |= 0x700 & (1 << 8); // Set MUX bits

	// Setup Pin 5 as output
	GPIOD_PDDR |= (1 << 5);

	// Setup ADC Clock ( < 4 MHz)
	ADC0_CFG1 = 0;  // Default everything.

	// Analog Calibrate
	ADC0_SC3 = 0x07; // Enable Maximum Hardware Averaging
	ADC0_SC3 |= 0x80; // Start Calibration

	// Wait for Calibration to Complete (either COCO or CALF)
	while(!(ADC0_SC1A & 0x80)){	}


	// Calibration Complete, write calibration registers.
	cal_v = ADC0_CLP0 + ADC0_CLP1 + ADC0_CLP2 + ADC0_CLP3 + ADC0_CLP4 + ADC0_CLPS;
	cal_v = cal_v >> 1 | 0x8000;
	ADC0_PG = cal_v;

	cal_v = 0;
	cal_v = ADC0_CLM0 + ADC0_CLM1 + ADC0_CLM2 + ADC0_CLM3 + ADC0_CLM4 + ADC0_CLMS;
	cal_v = cal_v >> 1 | 0x8000;
	ADC0_MG = cal_v;


	ADC0_SC3 = 0; // Turn off Hardware Averaging
    /* Never leave main */

	alphabet(str);
	while(1) {
		n=0; m=0;
		ADC0_SC1A = 0x03; // Set Channel, starts conversion.
		while(!(ADC0_SC1A & 0x80)){	}

		TPM0_SC= (1<<7)|(0x7); //Reset TOF, set PS=2^7=128
		TPM0_MOD=62;//Count for 1ms


		light_val = ADC0_RA; // Resets COCO
		while(light_val < 250) //Light is being detected
		{

			GPIOD_PDOR |= (1<<5);

			if(!(TPM0_SC | (0<<3))){
			TPM0_SC |= (1<<3);//TPM counter is turned on
			}

			//Check if 1ms has passed
			if((TPM0_SC & 0x80)==0)
			{n++;

			TPM0_SC |= (1<<7);}

			//Do conversion again
			ADC0_SC1A = 0x03; // Set Channel, starts conversion.
			while(!(ADC0_SC1A & 0x80)){	}
			light_val = ADC0_RA; // Resets COCO

		}

		while(light_val>250) {
			GPIOD_PDOR &= ~(1<<5);

			if(!(TPM0_SC | (0<<3))){
			TPM0_SC |= (1<<3);//TPM counter is turned on
			}

			//Check if 1ms has passed
			if((TPM0_SC & 0x80)==0)
			{m++;

			TPM0_SC |= (1<<7);}

		    //Do conversion again
			ADC0_SC1A = 0x03; // Set Channel, starts conversion.
			while(!(ADC0_SC1A & 0x80)){	}
			light_val = ADC0_RA; // Resets COCO

		}
		k=n;
		l=m;

/*
		printf("\n\n");
		printf("\nlight=%d",n);
		printf("\ndark=%d",m);
		*/

	if(k>20000 && k<30000)//dot
		{
			str[ai]='.';
			ai++;
		}
		else if(k>70000 && k<80000){//dash
			str[ai]='-';
			ai++;
		}

		if(l>100000 && l<110000){//delay between alphabets

			alphabet(str);
			str[0]='0';
			str[1]='0';
			str[2]='0';
			str[3]='0';
			str[4]='0';


			ai=0;
		}
		else if(l>270000 && l<300000){//delay between words
			alphabet(str);
			printf("\n");
			str[0]='0';
						str[1]='0';
						str[2]='0';
						str[3]='0';
						str[4]='0';
			ai=0;
		}
	/*	if(l>300000 && l<400000)
		{
			alphabet(str);
			str[0]='0';
									str[1]='0';
									str[2]='0';
									str[3]='0';
									str[4]='0';
						ai=0;

		}
*/

	}
    return 0;
}
////////////////////////////////////////////////////////////////////////////////
// EOF
////////////////////////////////////////////////////////////////////////////////


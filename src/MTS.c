/*******************************************************
This program was created by the
CodeWizardAVR V3.12 Advanced
Automatic Program Generator
© Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 12/25/2022
Author  : 
Company : 
Comments: 


Chip type               : ATmega32
Program type            : Application
AVR Core Clock frequency: 8.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 512
*******************************************************/

#include <mega32.h>
#include <stdio.h>
#include <delay.h>


void main(void)
{

     int Seg_let[] = {0b00010000,0b11000000,0b11100100,0b10000100,0b01100000
     ,0b01110000,0b00001000,0b10010000,0b10011110,0b10000110,0b11100000,
     0b11100010,0b01010110,0b11010100,0b11000100,0b00110000,0b00011000,0b11110100,0b01001000,
     0b10011100,0b10000010,0b11000110,0b10101010,0b01101100,0b10001000,0b00100100};
     
     int Seg_Mo[] = { 0b00010001,0b00111000,0b00111010,0b00100100,0b00000000,0b00110010,0b00100110,
     0b00110000,0b00010000,0b00110111,0b00100101,0b00110100,0b00010011,0b00010010,0b00100111,0b00110110,
     0b00111101,0b00100010,0b00100000,0b00000001,0b00100001,0b00110001,0b00100011,0b00111001,0b00111011,0b00111100};

     DDRD = 0xFF;  
     DDRB = 0x00;
     PORTD.0 = 0;
     /*switch (PORTB) {
    case 0b00111111:
          PORTD =Seg_let[2];
    break;
    };*/
     while(1)
     {
          /*for(i=0;i<26;i++){
               if(PINB==Seg_Mo[i])
               {
                    PORTD = Seg_let[i];
               };
          };*/
          switch (PINB) {
          case 0b00010001:PORTD = Seg_let[0];break;
          case 0b00111000:PORTD = Seg_let[1];break;
          case 0b00111010:PORTD = Seg_let[2];break;
          case 0b00100100:PORTD = Seg_let[3];break;
          case 0b00000000:PORTD = Seg_let[4];break;
          case 0b00110010:PORTD = Seg_let[5];break;
          case 0b00100110:PORTD = Seg_let[6];break;
          case 0b00110000:PORTD = Seg_let[7];break;
          case 0b00010000:PORTD = Seg_let[8];break;
          case 0b00110111:PORTD = Seg_let[9];break;
          case 0b00100101:PORTD = Seg_let[10];break;
          case 0b00110100:PORTD = Seg_let[11];break;
          case 0b00010011:PORTD = Seg_let[12];break;
          case 0b00010010:PORTD = Seg_let[13];break;
          case 0b00100111:PORTD = Seg_let[14];break;
          case 0b00110110:PORTD = Seg_let[15];break;
          case 0b00111101:PORTD = Seg_let[16];break;
          case 0b00100010:PORTD = Seg_let[17];break;
          case 0b00100000:PORTD = Seg_let[18];break;
          case 0b00000001:PORTD = Seg_let[19];break;
          case 0b00100001:PORTD = Seg_let[20];break;
          case 0b00110001:PORTD = Seg_let[21];break;
          case 0b00100011:PORTD = Seg_let[22];break;
          case 0b00111001:PORTD = Seg_let[23];break;
          case 0b00111011:PORTD = Seg_let[24];break;
          case 0b00111100:PORTD = Seg_let[25];break;
          default: PORTD = 0xFF;
          };
     } 
}

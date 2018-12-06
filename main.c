/********************************************************************
            Copyright,2015,HSAE TECHNOLOGY Co.,LTD.
*********************************************************************
*
* System Name : Navibox3rd
* File Name   : main.c
* AUTHOR      : 1110074
* DATE        : Mon, Apr 31, 2015   
* CPU         : MB96646RB
* Compiler    : Softune V3
* OS          : -
*
********************************************************************/
#include "../SystemManage/SystemStateManage/SystemStateManage.h"

void main(void)
{
     char ch;   
   	 unsigned char abc[25]="aacde ffeeccddee1122256677223321ss";
     Uart0_init();

  	 Putstr(abc); 
   	 Putch(10); 
   	 Putch(13); 
   	 while(1) 
     { 
   		ch = Getch();
   		Putch(ch);
   		if (ch==13)
   		{}
   		Putch(10);
  	 }
	
}

   
    
   
 


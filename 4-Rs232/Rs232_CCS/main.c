#include <main.h>
#include "Flex_LCD420.c"
#USE RS232(BAUD=9600, xmit=PIN_C6, rcv=PIN_C7,STREAM=COM_A)
//#USE RS232(BAUD=9600, xmit=PIN_C1, rcv=PIN_C2,STREAM=COM_b)

void main()
{
   lcd_init(); //initialize our lcd
   char c;
   //char s[50];
   
   
   
   while(TRUE)
   {
      c = fgetc(COM_A); // method for getting char data from terminal
      //fgets(s,COM_A); // getting string data from terminal
      //lcd_gotoxy(1,1);
      //printf(LCD_PUTC," %C ",c);
      //printf(LCD_PUTC," %S ",s);
      if(c=='h')
      {
         //puts("HELLO"); // default method for put data into terminal
         //fputs("HELLO",COM_A); // method with argument to choose com
         printf(LCD_PUTC," %S ","Hello");
      }
      else if(c=='b')
      {
         printf(LCD_PUTC," %S ","BJ");
      }
      
   }

}

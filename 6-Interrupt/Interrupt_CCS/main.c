#include <main.h>
#include "Flex_LCD420.c"
#USE RS232(BAUD=9600, xmit=PIN_C6, rcv=PIN_C7,STREAM=COM_A)

float value; // external value of ADC
char c;

#INT_RDA
void  RDA_isr(void) 
{

   c = fgetc(COM_A); // method for getting data from terminal
   
}

void main()
{

   setup_adc_ports(AN0_AN1_VSS_VREF);
   setup_adc(ADC_CLOCK_DIV_2);

   enable_interrupts(INT_RDA);
   enable_interrupts(GLOBAL);


   lcd_init();
   
   while(TRUE)
   {
      if(c=='a')
      {
           set_adc_channel(0);
           value = read_adc();
           printf(LCD_PUTC," %f ",value);
      }
      else if(c=='b')
      {
            set_adc_channel(1);
            value = read_adc();
            printf(LCD_PUTC," %f ",value);
      }
         
      lcd_gotoxy(1,1);
      delay_ms(50);
        
   }

}

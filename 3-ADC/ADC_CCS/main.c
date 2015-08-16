#include <main.h>
#include "Flex_LCD420.c"

void main()
{

   setup_adc_ports(AN0_AN1_VSS_VREF);
   setup_adc(ADC_CLOCK_DIV_2);
   
   float value; // external value of ADC
   lcd_init();
   
   while(TRUE)
   {

      set_adc_channel(0);
      
      delay_us(10);
      
      value = read_adc();
      float temp = value / 255;
      float tmp = temp*5;
      lcd_gotoxy(1,1);
      printf(LCD_PUTC,"%F",tmp);
      
      delay_ms(100);
   }

}

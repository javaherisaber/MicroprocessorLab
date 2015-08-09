#include <main.h>

void main()
{

      set_tris_b(0x00); //declare port b as output
   
   while(true)
   {
      output_high(pin_b0); //enable high voltage into b0
      delay_ms(300);
      output_low(pin_b0); //enable low voltage into b0

      output_high(pin_b1); //enable high voltage into b0
      delay_ms(300);
      output_low(pin_b1); //enable low voltage into b0
      
      output_a(0b10101010); // this method set's value of port a
      delay_ms(300);
   }

}

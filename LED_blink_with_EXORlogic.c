#include <AT89S52.h>
#define LED P2_4
#define ON 0
#define OFF 1
#define SW1 P3_3
#define SW2 P2_3
#define INPUT 1
void main()
{
   SW1 = INPUT;
   SW2 = INPUT;
   LED = OFF;
   while(1){
   __bit a, b;
   a=!SW1;
   b=!SW2;
   LED = (a|b);
   }
}

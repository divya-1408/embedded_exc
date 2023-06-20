#include <AT89S52.h>
#define LED P2_4
#define ON 0
#define OFF 1
#define SW1 P3_3
#define SW2 P2_3
void main()
{
   LED = OFF;
   while(1){
   if(SW1==ON && SW2==ON){
   LED = ON;
   }
   else{
   LED = OFF;
   }
   }
}

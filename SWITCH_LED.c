#include <AT89S52.h>
#define LED P2_4
#define ON 0
#define OFF 1
#define SWITCH P3_3
#define INPUT 1
void main()
{
   __bit status; /*initialize a bit variable*/
   LED = OFF;
   SWITCH = INPUT;
   while(1)
   {
      status = SWITCH;
      LED = status;
   }
}

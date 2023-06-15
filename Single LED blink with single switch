#include <AT89S52.h>
#define LED P2_4
#define ON 0
#define OFF 1
#define SWITCH P3_3
#define INPUT 1
void wait(int);
void main()
{
   __bit status; /*initialize a bit variable*/
   LED = OFF;
   SWITCH = INPUT;
   while(1)
   {
      status = SWITCH;
      if(status==0){
      LED = !OFF;
      wait(1);
      }
      else{
        LED = OFF;
        wait(1);
      }
   }
}
void wait(int del){
   int i,j;
   for(i=0;i<del;i++){
   for(j=0;j<15;j++){
   }
   }
}

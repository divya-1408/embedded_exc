#include <AT89S52.h>
#define LED1 P2_4
#define LED2 P3_4
#define ON 0
#define OFF 1
void wait(int);
void main()
{
   LED1 = OFF;
   LED2 = OFF;
   while(1)
   {
      LED1 = ON;
      LED2 = OFF;
      wait(1);
      LED1 = OFF;
      LED2 = ON;
      wait(1);
   }
}
void wait(int del){
   int i,j;
   for(i=0;i<del;i++){
   for(j=0;j<15;j++){
   }
   }
}

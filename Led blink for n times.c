#include <AT89S52.h>
#define LED P2_4
#define ON 0
#define OFF 1
void wait(int);
void main()
{
  char k;
   LED = OFF;
 
      for(k=1;k<=5;k++){
      LED = ON;
      wait(1);
      LED = OFF;
      wait(1);
      }
      while(1){
      }
      }
void wait(int del){
   int i,j;
   for(i=0;i<del;i++){
   for(j=0;j<15;j++){
   }
   }
}

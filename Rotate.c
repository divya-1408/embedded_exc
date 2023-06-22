#include <AT89S52.h>
void wait(int);
void main()
{
   char data = 0x01;
   char i;
   while(1)
   {
      for(i=0;i<8;i++)
      {
         P0=~(data<<i);
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

#include <AT89S52.h>
void wait(int);
void main()
{
  while(1){
   P0 = 0xAA;
   wait(1);
   P0 = 0x55;
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

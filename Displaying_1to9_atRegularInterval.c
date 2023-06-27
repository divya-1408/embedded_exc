#include<AT89S52.h>
const char c[11] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
void wait(int);
void main()
{
int i=0;
   while(1)
   {
      for(i=0;i<=9;i++){
      P0 = c[i];
      wait(10);
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

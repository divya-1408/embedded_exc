#include <AT89S52.h>
void wait(int);
void main()
{
   const char data[9] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80};
   int i=0;
   while(1)
      {
          for(i=0;i<8;i++)
          {
             P0 = ~data[i];
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

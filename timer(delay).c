#include<AT89S52.h>
#define led P0_0

void main()
{
   TR0 = 0; 
   TMOD = ((TMOD&0xF0)|0x01); 
   while(1){
   TH0 = 0xFC;
   TL0 = 0x18;
   TR0 = 1;
   while(TF0==0){
   }
   TF0 = 0;
   led=!led;
   TR0 = 0;
   }
   
   
}

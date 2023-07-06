#include<AT89S52.h>
#define row P0
#define col P1
const char xpat[9] = {0x7E, 0xBD, 0xDB, 0xE7, 0xE7, 0xDB, 0xBD, 0x7E};
void main()
{
   while(1){
     char i;
     for(i=0;i<8;i++){
     col = xpat[i];
     row = 0x01<<i;
     row=0x00;
     }
   }
}

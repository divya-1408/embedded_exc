#include<AT89S52.h>
#define sev_seg P0
#define sw P1
const char c[9] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8};
const char rd[9] = {0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F};
void main()
{
sw = 0xFF;
sev_seg = 0xFF;
   while(1)
   {
   char s, i;
   s = sw;
      for(i=0;i<8;i++){
         if(s==rd[i]){
         break;
         }
         else{}
      }
      if(i!=8){
      sev_seg = c[i];
      }
      else{
      sev_seg = 0xFF;
      }
   }
   }

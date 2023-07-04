#include<AT89S52.h>
#define led P1_0
#define sw P0
void main()
{
    char status, h, l;
    sw = 0xFF;
    led=1;
    while(1)
    {
       status = ~sw;
       l = status&0x0F;
       h=status>>4;
       if(l<=9 && h<=9)
       led = 0;
       else
       led = 1;
    }
  
}

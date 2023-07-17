#include <At89s52.h>
#define bus P0
#define rs  P1_2
#define rw P1_1
#define e P1_0

void lcd_cmd(char);
void lcd_data(char);
void lcd_busy(void);
void lcd_d(char*);

void main()
{
e=0;
 lcd_busy();
lcd_cmd(0x38);
lcd_cmd(0x01);
lcd_cmd(0x0c);
lcd_cmd(0x06);
lcd_cmd(0x80);
lcd_d("EMBEDDED C");
while(1){
lcd_cmd(0x08);
lcd_cmd(0x0c);
}
}
void lcd_cmd(char c)
{
bus=c;
rs=0;
rw=0;
e=1;
e=0;
lcd_busy();
}
void lcd_data(char c)
{
bus=c;
rs=1;
rw=0;
e=1;
e=0;
lcd_busy();
}

void lcd_busy(void)
{
char s;
bus=0xFF;
rs=0;
rw=1;
e=1;
e=0;
s=(bus&0x80);
while(s!=0)
{
e=1;
e=0;
s=(bus&0x80);
}
}
void lcd_d(char*p)
{
while(*p!='\0')
{
lcd_data(*p);
*p++;
}
}

#include <AT89S8252.h>
void wait(int);
void main(){
   P2_0=1;
   while(1){
      P2_0=0;
      wait(1);
      P2_0=1;
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

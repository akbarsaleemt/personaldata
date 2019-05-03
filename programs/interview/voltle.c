#include<stdio.h>
//register int s;
void main(){
  volatile int x=90;
  volatile float x3=90.54;
   register float x1=99.88;
  printf("x=%p\n",&x);
  printf("x1=%f\n",x1);
  printf("x3=%f\n",x3);
 // printf("s=%d\n",s);
}

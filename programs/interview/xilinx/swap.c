#include<stdio.h>
void main(){
  int a,b;
  a=98;
  b=87;
  a=a+b;
  b=a-b;
  a=a-b;
  printf("after swapiing a=%d\nb=%d\n",a,b);
  a=a^b;
  b=a^b;
  a=a^b;
  printf("after swapiing a=%d\nb=%d\n",a,b);
}

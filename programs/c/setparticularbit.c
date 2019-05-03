#include<stdio.h>
void main()
{
  int m=0x01;
  int n,pos;
  printf("enter n value\n");
  scanf("%x",&n);
  printf("enter position\n");
  scanf("%d",&pos);
  printf("after set %d position of %x is %x\n", pos,n,(n|(m<<pos)));
}

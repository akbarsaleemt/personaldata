#include<stdio.h>
void main(){
  int num=0xffffffef;
  int n=4;
  num=num&~(0x01<<n);
  printf("num=%x\n",num);
  printf("mask=%x\n",~(0x01<<n));
  printf("setnum=%x\n",(num|(0x01<<n)));
}

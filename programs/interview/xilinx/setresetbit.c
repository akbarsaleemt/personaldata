#include<stdio.h>
void main(){
  int num=0xffffffdf;
  int mask=0x01;
  int n,m;
  n=23;
  m=5;
  int res=(num&~(mask<<n))|mask<<m;
  printf("num=%x\nres=%x\n",num,res);
}

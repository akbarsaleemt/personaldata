#include<stdio.h>
void main(){
  int num=9;
  int mask=0x01;
  for(int i=0;i<(8*sizeof(int));i++)
  {
    if(num&mask)
      printf("1");
    else
      printf("0");
    mask=mask<<1;
  }
  printf("\n");
}

#include<stdio.h>
void main(){
  int d=0x09876543;
  char ch;
  ch=d;
  if(ch==0x43)
    printf("little endian ch=%x\n",ch);
  else
    printf("big endian ch=%x\n",ch);
}


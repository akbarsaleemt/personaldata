#include<stdio.h>
void main(){
  int num=0x0ffffffff;
  if(num^(0x01<<3)){
    printf("num^(0x01<<3)=%x\n",num^(0x01<<3));
    printf("num&0x0fffbffff=%x\n",num&0x0fffbffff);
  }
  else
    printf("num|0x01<<18=%x\n",num&0x01<<18);
    
}

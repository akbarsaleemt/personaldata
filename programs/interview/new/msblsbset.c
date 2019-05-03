#include<stdio.h>
void main(){
    int num=0x0ff7683;
    int mask=0x01;
    if(num&mask)
      printf("lsb is set\n");
    else
      printf("lsb is reset\n");
    if(num&(mask<<32))
      printf("msb is set\nnum=%x\n",(num&(mask<<32)));
    else
      printf("msb is reset\n");
    printf("mask<<32=%x\n",mask<<32); 
    printf("num=%x\n",num);
    printf("num 20bit reset=%x\n",num^mask<<20);
}

#include<stdio.h>

}
void main(){
  int m,n;
  m=22;
  n=6;
  int mask=0x01;
  int num=0xffffffff;
  num=0x0ffffff0f;
  num=0x0ff0fffff;
  num=0x0ff0fff0f;
  int res=0x00;
      printf("num2=%x\n",num);
  if(num&mask<<m){
    if(num&mask<<n){
      printf("num=%x\n",num);
    }
    else{
      res=(num^mask<<m);
      res=res|mask<<n;
      printf("res=%x\n",res);
    }
  }
  else{
    if((num&mask<<n)==0x00){
      printf("num2=%x\n",num);
    }
    else{
      res=(num|mask<<m);
      res=res^mask<<n;
        printf("res2=%x\n",res);
    }
  }
}

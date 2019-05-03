#include<stdio.h>
void main(){
  int a=5,b=6;
 int res=0;
  while(b>0){
    if(b&1)
      res=res+a;
    a=a<<1;
   b=b>>1;
  }
  printf("res %d\n",res);
}


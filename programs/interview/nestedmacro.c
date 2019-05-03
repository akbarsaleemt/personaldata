#include<stdio.h>
#define ADD(a,b) a+b
#define ARITH(a,b) ADD(a,b)+(a*b)

void main()
{

  int x=9;
  int y=122;
  int res=0;
  printf("x=%d\ty=%d\n",x,y);
  res=ARITH(x,y);
  printf("res=%d\n",res);
}

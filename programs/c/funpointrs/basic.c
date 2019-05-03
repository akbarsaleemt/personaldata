#include<stdio.h>
void add(int a,int b){
    printf("SUM=%d\n",a+b);
}

void diff(int a, int b){
  if(a>b)
  printf("DIFF=%d\n",a-b);
  else
    printf("DIFF=%d\n",b-a);
}
void main()
  {
    int x,y;
    void (*fadptr)(int,int);
    void (*fdiff)(int,int);
    x=34;y=54;
    fadptr=&add;
    fdiff=&diff;
    (*fadptr)(x,y);
    (*fdiff)(x,y);
  }


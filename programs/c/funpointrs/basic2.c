#include<stdio.h>
void add(int a,int b){
    printf("SUM=%d\n",a+b);
}
void swapping(int *k, int *l){
 int a=*k,b=*l;
  if(a>b)
    return;
  else{
    a=a+b;b=a-b;a=a-b;
    printf("a=%d\nb=%d\n",a,b);
  }
  k=&a;l=&b;
    printf("a=%d\nb=%d\n",*k,*l);
}
   
void diff(void (*swap)(int*,int*),int a, int b){
  swap(&a,&b);
  printf("DIFF=%d\n",a-b);
}
void main()
  {
    int x,y;
    void (*fadptr)(int,int);
    void (*fdiff)(void*,int,int);
    x=34;y=54;
    fadptr=&add;
    fdiff=&diff;
    (*fadptr)(x,y);
    (*fdiff)(&swapping,x,y);
  }


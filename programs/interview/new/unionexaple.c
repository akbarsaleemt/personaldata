#include<stdio.h>
union basic{
  char i;
  int n;
  char m[4];
}s;
void main(){
  printf("sizeof union is %ld\n",sizeof(s));
    s.n=0x76876543;
    printf("s.n=%x\n",s.n);
    printf("s.i=%x\n",s.i);
    printf("s.m[0]=%x\n",s.m[0]);
}  



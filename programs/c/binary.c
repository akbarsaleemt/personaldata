#include<stdio.h>
void main()
{
  int n,rev=0,base=1;
  printf("enter a number \n");
  scanf("%d",&n);
  while(n>0)
  {
    int rem;
    rem=n%2;
    rev=rev+rem*base;
    base=base*10;
    n=n/2;
  }
  printf(" num %d\n",rev);
}

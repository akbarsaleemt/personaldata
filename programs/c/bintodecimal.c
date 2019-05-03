#include<stdio.h>
void main()
{
  int n,rev=0,base=1;
  printf("enter a number n binary equivalent form\n");
  scanf("%d",&n);
  while(n>0)
  {
    int rem;
    rem=n%10;
    rev=rev+rem*base;
    base=base*2;
    n=n/10;
  }
  printf("reversed num %d\n",rev);
}

#include<stdio.h>
void main()
{
  int n,rev=0;
  printf("enter a number \n");
  scanf("%d",&n);
  while(n>0)
  {
    int rem;
    rem=n%10;
    rev=(rev*10)+rem;
    n=n/10;
  }
  printf("reversed num %d\n",rev);
}

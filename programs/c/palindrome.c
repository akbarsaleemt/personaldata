#include<stdio.h>
void main()
{
  int n,i=1;
  int ch, rev;
  printf("enter choice \n");
  scanf("%d",&ch);
  n=ch;
  while(n>0)
  {
    int rem;
    rem=n%10;
    rev=(rev*10)+rem;
    n=n/10;
  }
  printf("reversed num %d\n",rev);
  if(ch== rev)
    printf("the number is palindrome\n");
  else
    printf(" the number is not palindrome\n");
  
}


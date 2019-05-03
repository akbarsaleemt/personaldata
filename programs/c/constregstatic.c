#include<stdio.h>
void main()
{
  int a=10;
  const int *ptr;
  ptr=&a;
  printf("ptr=%d\n",*ptr);
  a=23;
  printf("ptr=%d\n",*ptr);
  int b=99;
  ptr=&b;
  printf("ptr=%d\n",*ptr);

  int c=10;
  int const *nptr;
  nptr=&c;
  printf("nptr=%d\n",*nptr);
  c=98;
  printf("nptr=%d\n",*nptr);
  nptr=&b;
  printf("nptr=%d\n",*nptr);
  //  *nptr=76; we will not assign directly data to it
  //  we can change address in ptr but we cant change directly data in it:x
  //
  printf("nptr=%d\n",*nptr);


}




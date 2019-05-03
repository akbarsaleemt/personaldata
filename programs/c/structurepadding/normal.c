#include<stdio.h>
#include<stdlib.h>
struct folder{
  int n;
  char b;
  double c;
long double d;
long long e;
long f;
long int g;
}files;

void main()
{
printf("size is %ld\n",sizeof(struct folder));
    printf("size is %ld\n",sizeof(files.n));
    printf("size is %ld\n",sizeof(files.b));
    printf("size is %ld\n",sizeof(files.c));
    printf("size is %ld\n",sizeof(files.d));
            printf("size is %ld\n",sizeof(files.e));
      printf("size is %ld\n",sizeof(files.f));
      printf("size is %ld\n",sizeof(files.g));
}

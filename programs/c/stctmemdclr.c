#include<stdio.h>
struct student{
  int a;
  char c;
};
void main()
{
  struct student s;
  printf("size of empty structureis: %d\n",sizeof(struct student));
 // printf("s.a=%d\n",s.a);
}

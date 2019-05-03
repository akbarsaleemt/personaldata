#include<stdio.h>
typedef struct student{
  int id;
  char name[10];
}st_t;
typedef union studen{
  int id;
  char name[10];
}stun_t;
void main()
{
    st_t s1;
    stun_t s2;
    printf("size of structure %ld\n",sizeof(s1));
    printf("size of union %ld \n",sizeof(s2));
}


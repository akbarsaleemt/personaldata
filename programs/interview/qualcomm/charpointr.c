#include<stdio.h>
void main(){
  int a=65;
 // char *ptr="akbar";
  char ptr=a;
  printf("%d\n",ptr);
  printf("%c",ptr+1);
  char *p;
  p=&a;
  printf("%d\n",p);
  printf("%c",*(ptr+1));

}

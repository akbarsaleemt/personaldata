#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(char *,int,int);
void main(){
  char b[100];
  printf("enter string\n");
//  scanf("%s",b);
  fgets(b,100,stdin);
  reverse(b,strlen(b)-1,0);
  printf("after reverse string is:%s\n",b);
}
void reverse(char *ptr,int len, int s)
{
  char ch;
  if(s>=len)
    return;
  ch=*(ptr+s);
  *(ptr+s)=*(ptr+len);
  *(ptr+len)=ch;
  reverse(ptr,--len,++s);
}

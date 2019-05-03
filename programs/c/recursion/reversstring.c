#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
char *reversestr(char *,int );
      char a[MAX];

void main()
    {
      char str[MAX];
      printf("enter string\n");
      scanf("%[^\n]s",str);
      printf("the string entered by user is : %s\n",str);
      char *ptr;
      ptr=reversestr(str,strlen(str));
      printf("reversed string is :%s\n",ptr);
    }


  char *reversestr(char *ptr,int len)
    {
      static int i=0;
      if(len>0)
          {
            a[i]=ptr[len-1];
            i++;len--;
            reversestr(ptr,len);
          }
         a[i]='\0';
         return a;
    }


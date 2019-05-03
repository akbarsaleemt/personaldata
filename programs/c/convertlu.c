#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
void main()
  {
    char ch,buf;
        while(1){
          printf("enetr a charecter\n");
          __fpurge(stdin);
          scanf(" %c",&ch);
               if(((ch<='a')||(ch<='z'))||((ch<='A')||(ch<='Z')))
                 {
                   if((ch<='a')||(ch<='z'))
                       buf=(ch-'a')+'A';
                   if((ch<='A')||(ch<='Z'))
                       buf=(ch-'A')+'a';
               printf("after conversion buf=%c\n",buf);
                 }
               else if(!(((ch<='a')||(ch<='z'))||((ch<='A')||(ch<='Z')))){
                         if(ch=='0')
                           exit(0);
                         printf("enter a character only\n");
                       }
        }
  }
        


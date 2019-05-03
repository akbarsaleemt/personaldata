#include<stdio.h>
void main()
{
   int *ptr;
   int i=10;
   while(i--){
   printf("enter ptr value\n");
   scanf("%x",ptr);
    char ch;
    int i,j;
    char *cptr;
    cptr=ptr;
     printf("ptr value in little endian=%x\n",*ptr);
     for(j=0,i=sizeof(*ptr)-1;i>j;i--,j++)
       {
        ch=cptr[i];
        cptr[i]=cptr[j];
        cptr[j]=ch;
       }
     printf("after conversion little endian to big endian\n");
     printf("*ptr=%x\n",*ptr);
   }

}

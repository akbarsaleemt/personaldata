#include<stdio.h>
void main()
{
//  int *ptr;
  int x=0x87987856;
  char ch;
  int i,j;
 // ptr=&x;
  char *cptr;
 // cptr=ptr;
 cptr=&x;
	ch=x;
  printf("x value in little endian=%x\n",x);
  printf("ch value in little endian=%x\n",ch);
  printf("cptr value in little endian=%x\n",*cptr);
  for(j=0,i=sizeof(x)-1;i>j;i--,j++)
  {
    ch=cptr[i];
    cptr[i]=cptr[j];
    cptr[j]=ch;
  }
  printf("after conversion little endian to big endian\n");
  printf("x=%x\n",x);

}

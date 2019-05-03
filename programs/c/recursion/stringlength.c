#include<stdio.h>
#include<stdlib.h>
int strln(char *);
void main(){
    char buf[100];
    printf("enter string\n");
  //  scanf("%s",buf);
   fgets(buf,100,stdin);
    printf("buf=%s\n",buf);
    int len;
    len=strln(buf);
    printf("length of string is %d\n",len);
}
  int strln(char *ptr){
      static int i=0;
      if(ptr[i]=='\0')
        return i;
      else
        i++;
      strln(ptr);
  }


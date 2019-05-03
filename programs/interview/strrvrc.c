#include<stdio.h>
#include<string.h>
void main(){
  char s[]="hello";
  int len,i;
  len=strlen(s)-1;
  printf("before reverse :%s\nlen=%d\n",s,len+1);
  for(i=0;i<(strlen(s))/2;i++){
    s[i]=s[i]+s[len];
    s[len]=s[i]-s[len];
    s[i]=s[i]-s[len];
    len=len-1;
   
  }
  printf("after reverse :%s\n",s);
}

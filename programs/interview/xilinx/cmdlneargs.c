#include<stdio.h>
#include<string.h>
void main(int argc,char *argv[]){
  char pswd[10];
  memset(pswd,0,10);
  strcpy(pswd,argv[1]);
  if(strcmp(pswd,"votary tech")==0)
          printf("passwd is correct\n");
  else
        printf("password is incorrect\n");
}


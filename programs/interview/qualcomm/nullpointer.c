#include<stdio.h>
#include<stdlib.h>
void fun(char *ptr){
  int i=0;
  char name[]="akbar saleem";
  char *nptr=(char *)realloc(ptr,strlen(name));
  strcpy(nptr,name);
  
}

void main(){
  char *p=NULL;
  p=(char *)malloc(sizeof(char));
  fun(p);
  printf("name=%s\n",p);
  free(p);
}

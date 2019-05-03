#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(int argc , char *argv[]){
    char *ptr;
    ptr=(char *)malloc(sizeof(char)*strlen(argv[1]));
    strcpy(ptr,argv[1]);
    printf("%s\n",ptr);
}

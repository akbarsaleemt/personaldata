#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include <sys/types.h>
       #include <sys/stat.h>
       #include <fcntl.h>
void main(){
    int fd1=0;
     printf("hello world this is vt\n");
    close(1);
    dup(fd1);
     printf("hello world this is vt\n");
     printf("trhis hjjjjjjjjjjjjfgjksdfgksf\n");
     printf("hello world this is vt\n");
}

     



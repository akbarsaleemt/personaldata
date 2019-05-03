#include<stdio.h>
#include<string.h>
void main(){
    char buf[10]="hello";
    char buf2[10]="how";
    strcat(buf,buf2);
    printf("buf=%s\n",buf);
}

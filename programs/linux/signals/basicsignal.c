#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
#include<sys/types.h>
void handler(int sig){
  printf("signal handler\n");
  printf("sig=%d\n",sig);
  }
void main()
      {
        signal(SIGINT,handler);
        while(1);
      }

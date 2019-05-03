#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>
#include<string.h>
struct sigaction act;
void handler(int sig){
    printf("in sigaction signal handler\n");

}

void main()
    {
      memset(&act,0,sizeof(act));
      printf("in main\n");
      act.sa_handler=handler;
      act.sa_flags=0;
      sigaction(SIGINT,&act,NULL);
      printf("after sigaction\n");
      while(1);
    }

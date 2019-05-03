#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
#include<unistd.h>

void ha_alarm(int sig){
  printf("in alarm handler\n");
  alarm(5);
  }

void main()
    {
      static int i=0;
      signal(SIGALRM,ha_alarm);
      alarm(5);
      while(1){
      sleep(1);
        printf("in loop %d\n",i++);
 // alarm(5);
      }
    }

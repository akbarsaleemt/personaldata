#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<signal.h>
void handler(int sig){
  static int x;
    printf("handler called at %d time with  %d signal\n",++x,sig);
}

void main()
{
    int id;
    signal(SIGINT,handler);
    id=fork();
      if(id==0){
        while(1){
          sleep(1);
          printf("child\n");
        }
      }
      else{
        while(1){
          sleep(1);
          printf("parent\n");
        }
      }
}

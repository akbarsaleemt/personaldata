 #include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
 int sum;
void *runner(void *param);
 int main(int argc, char *argv[]) {     
     pthread_t tid;
    pthread_attr_t attr;
     
     if (argc !=2){
         fprintf(stderr, "usage: a.out <interger value>\n");
         return -1;
     }
     if (atoi(argv[1]) < 0) {
         fprintf(stderr, "%d must be >= 0\n",atoi(argv[1]));
         return -1;
    }
     pthread_attr_init(&attr);//get default attributes
     pthread_create(&tid,&attr,runner,argv[1]);//create the thread
     pthread_join(tid,NULL);//wait for the thread to exit
     printf("sum = %d\n",sum);
 }

 void *runner(void *param) {
     int i, upper = atoi(param);
     sum = 0;
     for (i =1; i <= upper; i++) {
         sum += i;
     } 
     pthread_exit(0);
 }

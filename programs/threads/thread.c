#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#define NUM_THREADS 2

// define the worker finction
typedef struct thread_data
{
int id;
double stuff;
}thread_data;


void* hello(void *arg)
{
thread_data *data=(thread_data*)arg;
printf("hello baby how r:%d u\n",data->id);
pthread_exit(NULL);
}

int main(int argc,char ** argv)
{
printf("I am in main\n");
int i,rc;
pthread_t thr[NUM_THREADS];
thread_data data[NUM_THREADS];


for (i=0;i<NUM_THREADS;i++)
{

printf("I am in main for loop %d\n",i);
data[i].id=i;
if((rc= pthread_create(&thr[i],NULL,hello,&data[i])))
{
printf("I am in  pthread create\n");
fprintf(stderr,"error:pthread_create, rc:%d\n",rc);
return EXIT_FAILURE;
}
}
// block untill all threads complete

//for(i=0;i<NUM_THREADS;++i)
//{
//printf("I am in join function\n");
pthread_join(thr[i],NULL);

//}

return EXIT_SUCCESS;
}





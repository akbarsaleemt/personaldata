#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

void*hello1(void *a)
{
int p=(*(int*)a);
while(p<10)
{
p++;
printf(" interger:%d\n",p);
}
}


void*hello(void *b)
{

int p=(*(int*)b);
while(p<3|p<5)
{
p++;
printf("hello:%d",p);
}

}


void *hello_str(void *x)
{
char *str=(char*)x;


printf(" hello usha welcome to p thread: %s\n",str);

printf("*************\n");

pthread_exit(NULL);
}

void *hello_arr(void *x)
{
int p=(*(int*)x);
int *arr=(int *)x;
int i;

printf(" hello usha welcome to p thread: %d\n",p);
printf("array:%d\n",arr[0]);
printf("array:%d\n",arr[1]);
printf("array:%d\n",arr[2]);
printf("array:%d\n",arr[3]);
printf("array:%d\n",arr[4]);
printf("array:%d\n",arr[5]);
printf("*************\n");

pthread_exit(NULL);
}



int main()
{
pthread_t t1,t2,t3,t4;
int rc,jt,x=5;
char *str="I AM A STRING";
int arr[100]={10,20,30,40,50};
void *ret;
int i;

if((rc=pthread_create(&t1,NULL,hello1,(void*)&x)))
{
      fprintf(stderr, "error: pthread_create, rc: %d\n", rc);
      return EXIT_FAILURE;
}

/*if((rc=pthread_create(&t2,NULL,hello,(void*)&x)))
{
      fprintf(stderr, "error: pthread_create, rc: %d\n", rc);
      return EXIT_FAILURE;
}*/
if((rc=pthread_create(&t3,NULL,hello_str,(void*)str)))
{
      fprintf(stderr, "error: pthread_create, rc: %d\n", rc);
      return EXIT_FAILURE;
}
if((rc=pthread_create(&t4,NULL,hello_arr,(void*)arr)))
{
      fprintf(stderr, "error: pthread_create, rc: %d\n", rc);
      return EXIT_FAILURE;
}

pthread_join(t1,NULL);
//pthread_join(t2,NULL);
pthread_join(t3,NULL);
pthread_join(t4,NULL);
}






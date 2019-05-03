#include<stdio.h>
#include<pthread.h>
void *fun(void *id){
    printf(" id=%d\n",*(int*)id);
}
void main()
{
    pthread_t t[3];
    int i;
    for(i=0;i<3;i++)
        pthread_create(&t[i],NULL,&fun,(void *)&t[i]);
}


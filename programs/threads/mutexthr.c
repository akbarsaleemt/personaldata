/* in /cs/cs3013/public/example/mutexthr.c */
#include <stdio.h>
#include <pthread.h>
#include<stdlib.h>
/* cc -o mutexthr mutexthr.c -lpthread */

pthread_mutex_t mutex;  /* mutex id */
void  main()
{
    pthread_t idA, idB; /* ids of threads */
    void *MyThread(void *);

    if (pthread_mutex_init(&mutex, NULL) < 0) {
        perror("pthread_mutex_init");
    }
    if (pthread_create(&idA, NULL, MyThread, (void *)"A") != 0) {
        perror("pthread_create");
    }
    if (pthread_create(&idB, NULL, MyThread, (void *)"B") != 0) {
        perror("pthread_create");
    }
    (void)pthread_join(idA, NULL);
    (void)pthread_join(idB, NULL);
    (void)pthread_mutex_destroy(&mutex);
}        

int x = 0;  /* global shared variable */

void *MyThread(void *arg)
{
    char *sbName;

    sbName = (char *)arg;
    IncrementX();
    printf("X = %d in Thread %s\n", x, sbName);
}    

int IncrementX()
{
    int Temp; /* local variable */

    BeginRegion();  /* enter critical region */
    Temp = x;
    Temp = Temp + 1;
    x = Temp;
    EndRegion();   /* exit critical region */
}    

int BeginRegion()
{
    pthread_mutex_lock(&mutex);
}

EndRegion()
{
    pthread_mutex_unlock(&mutex);
}


#ifndef HEADER_H
#define HEADER_H
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}queue_t;
queue_t *front,*rear;
queue_t *enqueue(queue_t *,int);
queue_t *dequeue(queue_t *);
void display(queue_t*);
#endif


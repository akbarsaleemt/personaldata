#ifndef HEADER_H
#define HEADER_H
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
  int data;
  struct node *next;
}stack_t;
stack_t *start; 
stack_t* push(stack_t *,int);
stack_t* pop(stack_t*);
void displaystack(stack_t*);
#endif


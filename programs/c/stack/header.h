#ifndef HEADER_H
#define HEADER_H
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  char data;
  struct node *next;
}stack_t;
stack_t *top;
stack_t *push(stack_t *, char);
char pop(stack_t *);
void display(stack_t *);
#endif

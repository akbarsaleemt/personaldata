#ifndef HEADER_H
#define HEADER_H
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	struct node *prev_link;	
	int data;
	struct node *next_link;
	}linklist_t;
linklist_t *start;
void create_node(linklist_t *,int);
void displaynode(linklist_t *);
linklist_t *recursiveReverseLL(linklist_t *);
void doublelinkedlist(linklist_t *);
void displaynode_double(linklist_t *);
void displaynode_back(linklist_t *,linklist_t *);
linklist_t *reverse(linklist_t *);
linklist_t *delete_begin(linklist_t *);
linklist_t *delete_position(linklist_t *);

#endif

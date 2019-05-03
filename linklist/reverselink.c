#include<stdio.h>
#include"header.h"
linklist_t *recursiveReverseLL(linklist_t *list)
{
    linklist_t *revHead;
    if (list == NULL || list->next_link == NULL)
    {
        return list;
    }

    revHead = recursiveReverseLL(list->next_link);
    list->next_link->next_link = list;
    list->next_link = NULL; 

    return revHead;
}
  

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - Free linked list
 * @head: The first element
 */

void free_listint(listint_t *head)
{
	struct node *n = head;
	while(n){
   	struct node *n1 = n;
   	n = n->next;
   	free(n1);
}

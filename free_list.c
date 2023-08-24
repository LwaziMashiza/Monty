#include "monty.h"
/**
* free_list - frees a doubly linked list
* @head: head of the stack
*/
void free_list(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}

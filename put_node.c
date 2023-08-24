#include "monty.h"
/**
 * mynode - add node to the head stack
 * @head: head of the stack
 * @m: new_value
 * Return: nothing
*/
void mynode(stack_t **head, int m)
{

	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->m = m;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}

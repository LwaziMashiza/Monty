#include "monty.h"
/**
 * my_pall - displays the stack content
 * @head: stack head
 * @counter: no used
 * Return: nothing
*/
void my_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->m);
		h = h->next;
	}
}

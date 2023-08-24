#include "monty.h"
/**
 * my_str - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_number
 * Return: nothing
*/
void my_str(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->m > 127 || h->m <= 0)
		{
			break;
		}
		printf("%c", h->m);
		h = h->next;
	}
	printf("\n");
}

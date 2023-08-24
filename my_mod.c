#include "monty.h"
/**
 * my_mod - calculatess the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: nothing
*/
void my_mod(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int ln = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		ln++;
	}
	if (ln < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_list(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->m == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_list(*head);
		exit(EXIT_FAILURE);
	}
	aux = h->next->m % h->m;
	h->next->m = aux;
	*head = h->next;
	free(h);
}

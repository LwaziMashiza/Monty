#include "monty.h"
/**
 * my_mul - multiplies top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: nothing
*/
void my_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_list(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->next->m * h->m;
	h->next->m = aux;
	*head = h->next;
	free(h);
}

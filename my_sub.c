#include "monty.h"
/**
  *my_sub- deals with sustration
  *@head: stack head
  *@counter: line_number
  *Return: nothing
 */
void my_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int sus, nodes;

	aux = *head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_list(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->next->m - aux->m;
	aux->next->m = sus;
	*head = aux->next;
	free(aux);
}

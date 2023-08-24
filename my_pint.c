#include "monty.h"
/**
 * my_print - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: nothing
*/
void my_print(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_list(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->m);
}

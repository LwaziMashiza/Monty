#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @m: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO  project
 */
typedef struct stack_s
{
	int m;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function that handles opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void my_push(stack_t **head, unsigned int number);
void my_pall(stack_t **head, unsigned int number);
void my_print(stack_t **head, unsigned int number);
int my_do(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_list(stack_t *head);
void my_pop(stack_t **head, unsigned int counter);
void my_swap(stack_t **head, unsigned int counter);
void my_add(stack_t **head, unsigned int counter);
void my_nop(stack_t **head, unsigned int counter);
void my_sub(stack_t **head, unsigned int counter);
void my_div(stack_t **head, unsigned int counter);
void my_mul(stack_t **head, unsigned int counter);
void my_mod(stack_t **head, unsigned int counter);
void my_char(stack_t **head, unsigned int counter);
void my_str(stack_t **head, unsigned int counter);
void my_rotate(stack_t **head, unsigned int counter);
void my_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void mynode(stack_t **head, int m);
void addqueue(stack_t **head, int m);
void my_queue(stack_t **head, unsigned int counter);
void my_stack(stack_t **head, unsigned int counter);
#endif

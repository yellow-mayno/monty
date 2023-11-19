#ifndef MONTY_H
#define MONTY_H

/* headers */
#include <unistd.h> /* for malloc */
#include <fcntl.h> /* for open */
#include <string.h> /* for len */
#include <stdio.h> /* for printf */
#include <limits.h> /* for INT_MIN */
#include <stdlib.h> /* for EXIT_VALUE */


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
		int n;
		struct stack_s *prev;
		struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
		char *opcode;
		void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* Global variables */
char line[2][1000]; /* current line */
int fd; /*f ile descriptor */
char current[10]; /* current char in the file */
int read_status; /* read returned value */
stack_t *staque = NULL; /* stack / queue */
int line_number = 0;


/* prototypes */
void empty_line(void);
void execute_operation(void);
int convert(void);

#endif

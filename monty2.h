#ifndef MONTY2_H
#define MONTY2_H

#include "monty.h"

int push_stack(stack_t **stack, unsigned int line_number);
int pall_stack(stack_t **stack, unsigned int line_number);

instruction_t operations[] = {{"push", push_stack}, {"pall", pall_stack}, {NULL, NULL}};
	
#endif

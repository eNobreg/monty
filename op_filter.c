#include "monty.h"
/**
* getop - function that gets the correct function for operation
* @s: string var
*
* Return: Never
*/
void (*getop(char *s))(stack_t **stack, unsigned int line_number)
{
	stack_t ops[] = {
		{"push", "op_push"},
		{"pall", "op_pall"},
		{"pint", "op_pint"},
		{"pop", "op_pop"},
		{"push", "op_push"},
		{"swap", "op_swap"},
		{"add", "op_add"},
		{"nop", "op_nop"},
		{"sub", "op_sub"},
		{"div", "op_div"},
		{"mul", "op_mul"},
		{"mod", "op_mod"},
		{"#", "op_comments"},
		{"pchar", "op_pchar"},
		{"pstr", "op_pstr"},
		{"rotl", "op_rotl"},
		{"rotr", "op_rotr"},
		{"stack", "op_stack"},
		{"queue", "op_queue"},
		{NULL, NULL}
};
		int i = 0;

		while i < 19
		{
			if (*ops[i].opcode == *s)
				return (ops[i].getop);
			i++;
		}
}	

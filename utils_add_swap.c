#include "monty.h"
/**
 * op_add - adds the data from the top two nodes, creates a new node
 * and replaces them
 * @head: List node passed in
 * @line_number: line number var
 * Return: Never
 */
void op_add(stack_t **head, unsigned int line_number)
{
	stack_t *current;
	int i = 0;

	if (*head && (*head)->next)
	{
		current = *head;
		i = current->n + current->next->n;
		current->next->n = i;
		free(current);
		*head = (*head)->next;
	}
	else
		handle_error(8, line_number, "hiiii");
}
/**
 * op_swap - swaps the top two nodes
 * @head: List node passed in
 * @line_number: line number var
 * Return: Never
 */
void op_swap(stack_t **head, unsigned int line_number)
{
	stack_t *current;
	stack_t *hold = NULL;

	if (*head && (*head)->next)
	{
		current = *head;
		hold = (*head)->next;
		current->next = hold->next;
		current->prev = hold;
		hold->prev = NULL;
		if (hold->next)
			hold->next->prev = current;
		hold->next = current;
	}
	else
		handle_error(7, line_number, "hiiiii");
	*head = hold;
}
/**
 * op_sub - subracts the data of the top node from the second,
 * and creates a new node and replaces them
 * @head: List node passed in
 * @line_number: line number var
 * Return: Never
 */
void op_sub(stack_t **head, unsigned int line_number)
{
	stack_t *current;
	int i = 0;

	if (*head && (*head)->next)
	{
		current = *head;
		i = current->next->n - current->n;
		current->next->n = i;
		current->next->prev = NULL;
		*head = (*head)->next;
		free(current);
	}
	else
		handle_error(9, line_number, "hiiiii");
}
/**
 * op_div - divides the data of the top node from the second,
 * and creates a new node and replaces them
 * @head: List node passed in
 * @line_number: line number var
 * Return: Never
 */
void op_div(stack_t **head, unsigned int line_number)
{
	stack_t *current;
	int i = 0;

	if (*head && (*head)->next)
	{
		if ((*head)->n == 0)
			handle_error(11, line_number, "hiiiii");
		current = *head;
		i = current->next->n / current->n;
		current->next->n = i;
		current->next->prev = NULL;
		*head = (*head)->next;
		free(current);
	}
	else
		handle_error(10, line_number, "hiiiii");
}
/**
 * op_mul - multiplies the data of the top node from the second,
 * and creates a new node and replaces them
 * @head: List node passed in
 * @line_number: line number var
 * Return: Never
 */
void op_mul(stack_t **head, unsigned int line_number)
{
	stack_t *current;
	int i = 0;

	if (*head && (*head)->next)
	{
		current = *head;
		i = current->n * current->next->n;
		current->next->n = i;
		current->next->prev = NULL;
		*head = (*head)->next;
		free(current);
	}
	else
		handle_error(12, line_number, "hiiiii");
}

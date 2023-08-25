#include "monty.h"

/**
 * handle_err - Manages the printing of interpreter errors
 * @errcode: The error code to manage
 * @op: The operation code to manage
 * @line_num: The line on which the error occurred
 * @buff: The reserved error line buffer
 *
 * Return: Nothing
 */
void handle_err(int errcode, char *op, unsigned int line_num, char *buff)
{
	if (errcode >= 100 && errcode < 200)
		handle_com_err(errcode, op, line_num);
	else if (errcode >= 200 && errcode <= 210)
		handle_use_err(errcode, line_num);
	else if (errcode >= 211 && errcode <= 220)
		handle_more_use_err(errcode, line_num);
	else
		return;

	frees_stack();

	if (buff)
		free(buff);

	exit(EXIT_FAILURE);
}

/**
 * handle_com_err - Manages common interpreter errors
 * @errcode: The error code to manage
 * @op: The operation code to manage
 * @line_num: The line on which the error occurred
 *
 * Return: Nothing
 */
void handle_com_err(int errcode, char *op, unsigned int line_num)
{
	switch (errcode)
	{
		case ERR_BAD_INST:
			fprintf(stderr, "L%d: unknown instruction %s\n", line_num, op);
			break;
		case ERR_BAD_MALL:
			fprintf(stderr, "Error: malloc failed\n");
			break;
		default:
			break;
	}
}

/**
 * handle_use_err - Manages interpreter usage errors
 * @errcode: The error code to manage
 * @line_num: The line on which the error occurred
 *
 * Return: Nothing
 */
void handle_use_err(int errcode, unsigned int line_num)
{
	switch (errcode)
	{
		case ERR_ARG_USG:
			fprintf(stderr, "USAGE: monty file\n");
			break;
		case ERR_PUSH_USG:
			fprintf(stderr, "L%d: usage: push integer\n", line_num);
			break;
		case ERR_PINT_USG:
			fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
			break;
		case ERR_POP_USG:
			fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
			break;
		case ERR_SWAP_USG:
			fprintf(stderr, "L%d: can't swap, stack too short\n", line_num);
			break;
		case ERR_ADD_USG:
			fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
			break;
		case ERR_SUB_USG:
			fprintf(stderr, "L%d: can't sub, stack too short\n", line_num);
			break;
		case ERR_DIV_USG:
			fprintf(stderr, "L%d: can't div, stack too short\n", line_num);
			break;
		case ERR_DIV_ZRO:
			fprintf(stderr, "L%d: division by zero\n", line_num);
			break;
		case ERR_MUL_USG:
			fprintf(stderr, "L%d: can't mul, stack too short\n", line_num);
			break;
		case ERR_MOD_USG:
			fprintf(stderr, "L%d: can't mod, stack too short\n", line_num);
			break;
		default:
			break;
	}
}

/**
 * handle_more_use_err - Manages interpreter usage errors
 * @errcode: The error code to manage
 * @line_num: The line on which the error occurred
 *
 * Return: Nothing
 */
void handle_more_use_err(int errcode, unsigned int line_num)
{
	switch (errcode)
	{
		case ERR_PCH_USG:
			fprintf(stderr, "L%d: can't pchar, value out of range\n", line_num);
			break;
		case ERR_PCH_EMP:
			fprintf(stderr, "L%d: can't pchar, stack empty\n", line_num);
			break;
		default:
			break;
	}
}

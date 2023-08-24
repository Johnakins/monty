#include "monty.h"

stack_t *stack_head = NULL;

/**
 * main - Entry point for the Monty Interpreter
 * @argc: The number of arguments
 * @argv: The array of argument strings
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	FILE *file_ptr = NULL;
	size_t line_length = 0;
	unsigned int line_number = 1;
	int chars_read = 0, opcode_status = 0;
	char *file_name = NULL, *opcode = NULL, *op_param = NULL, *buffer = NULL;

	file_name = argv[1];
	check_args_num(argc);
	file_ptr = open_file(file_name);

	while ((chars_read = getline(&buffer, &line_length, file_ptr)) != -1)
	{
		opcode = strtok(buffer, "\t\n ");
		if (opcode)
		{
			if (opcode[0] == '#')
			{
				++line_number;
				continue;
			}

			op_param = strtok(NULL, "\t\n ");
			opcode_status = handle_execution(opcode, op_param, line_number, opcode_status);

			if (opcode_status >= 100 && opcode_status < 300)
			{
				fclose(file_ptr);
				handle_error(opcode_status, opcode, line_number, buffer);
			}
		}

		++line_number;
	}

	free_stack();
	free(buffer);
	fclose(file_ptr);
	return (0);
}


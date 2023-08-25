#ifndef MONTY_H
#define MONTY_H

/* Constants */
#define SUCSS_OP	0
#define VALID_PARM	0
#define MIN_ARGS	2
#define METH_STACK	300
#define METH_QUEUE	301

/* Common Errors */
#define ERR_BAD_INST	100
#define ERR_BAD_MALL	101
#define ERR_INVLD_PARM	102

/* Usage Errors */
#define ERR_ARG_USG	200
#define ERR_PUSH_USG	201
#define ERR_PINT_USG	202
#define ERR_POP_USG	203
#define ERR_SWAP_USG	204
#define ERR_ADD_USG	205
#define ERR_SUB_USG	206
#define ERR_DIV_USG	207
#define ERR_DIV_ZRO	208
#define ERR_MUL_USG	209
#define ERR_MOD_USG	210
#define ERR_PCH_USG	211
#define ERR_PCH_EMP	212

#include <ctype.h>
#include <fcntl.h>
#include <stdlib.h>
<<<<<<< HEAD
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
=======
#include <stdio.h>
#include <string.h>
#include <unistd.h>

>>>>>>> 12d0007ad5e0cb42d7d387be2221ab16330c1321
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
<<<<<<< HEAD
{
	int n;
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
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
=======
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
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
>>>>>>> 12d0007ad5e0cb42d7d387be2221ab16330c1321
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

<<<<<<< HEAD

void f_pop(stack_t **head, unsigned int counter);
void f_swap(stack_t **head, unsigned int counter);
void f_add(stack_t **head, unsigned int counter);
void f_nop(stack_t **head, unsigned int counter);
void f_sub(stack_t **head, unsigned int counter);
void f_push(stack_t **head, unsigned int number);
void f_pall(stack_t **head, unsigned int number);
void f_pint(stack_t **head, unsigned int number);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void f_div(stack_t **head, unsigned int counter);
void f_mul(stack_t **head, unsigned int counter);

void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void f_mod(stack_t **head, unsigned int counter);
void f_pchar(stack_t **head, unsigned int counter);
void f_pstr(stack_t **head, unsigned int counter);
void f_rotl(stack_t **head, unsigned int counter);
void f_queue(stack_t **head, unsigned int counter);
void f_stack(stack_t **head, unsigned int counter);
#endif

=======
extern stack_t *head;

void check_args_num(int argn);
FILE *open_file(char *filename);
void check_access_rights(char *filename);
int check_push_param(char *param);
int check_digits(char *s);
void frees_stack(void);
int handle_execution(char *op_code, char *op_param, unsigned int line, int m);
void handle_err(int errcode, char *op, unsigned int line_num, char *buff);
void handle_com_err(int errcode, char *op, unsigned int line_num);
void handle_use_err(int errcode, unsigned int line_num);
void handle_more_use_err(int errcode, unsigned int line_num);
void (*pick_func(char *s))(stack_t **, unsigned int);
unsigned int count_stack(stack_t *stack);
void push(stack_t **stack, unsigned int param);
void push_queue(stack_t **stack, unsigned int param);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void divide(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);

#endif /* _MONTY_ */
>>>>>>> 12d0007ad5e0cb42d7d387be2221ab16330c1321

#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 100
typedef struct stack
{
	int data[STACK_SIZE];
	int top;
}Stack;

void push(Stack *stack, int value);
void pall(Stack *stack);
void pint(Stack *stack);
void pop(Stack *stack);
void swap(Stack *stack);
void add(Stack *stack);
void nop(Stack *stack);
#endif

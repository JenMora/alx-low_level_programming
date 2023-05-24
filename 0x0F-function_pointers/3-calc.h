#ifndef CALC_H
#define CALC_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - the strucure operator
 * @op: teh operator
 * @f:the function pointer
 */
typedef struct op
{
	char *op;
	int (*f)(int i, int j);
} op_t;
int op_add(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int op_sub(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif

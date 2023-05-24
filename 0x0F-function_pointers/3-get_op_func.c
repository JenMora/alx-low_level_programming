#include "3-calc.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *get_op_func -a function that selects the correct function
 *to perform the operation asked by the use.
 *@s:the user given operator
 *Return:pointer to the function corresponding to the user
 *given operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"-", op_mul},
		{"-", op_div},
		{"-", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

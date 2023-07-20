#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Matches operator from main
 * @s: Operator string
 * Return: Pointer to the corresponding arithmetic operation function
 *         or NULL if the operator is not supported.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t op_s[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (op_s[i].op)
	{
		if (*(op_s[i].op) == *s)
			return (op_s[i].f);
		i++;
	}

	return (NULL);
}

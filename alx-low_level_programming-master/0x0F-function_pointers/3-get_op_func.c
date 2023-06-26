#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - function pointer
 * @s: operator passed as argument
 *
 * Return: a pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int x = 0;

	while (x < 5)
	{
		if (*s == *ops[x].op)
			return (*(ops[x]).f);
		x++;
	}
	return (NULL);
}

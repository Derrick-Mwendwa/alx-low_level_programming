#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - gets the correct operation asked by the user
 * @s: the operator argument
 *
 * Return: function pointer to the operator given
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
	int n;

	n = 0;
	while (n < 5)
	{
		if (ops[n].op[0] == s[0])
			return (ops[n].f);
		n++;
	}
	return (NULL);
}

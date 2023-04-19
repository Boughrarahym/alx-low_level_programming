#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - function that selects the correct function
 * to perform the operation asked by the user
 * @s: the operator passed as argument to the program
 * Return: a pointer to the correct function, NULL otherwise
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
	int h;

	h = 0;
	while (ops[h].op != NULL)
	{
		if (strcmp(s, ops[h].op) == 0)
			return (ops[h].f);
		h++;
	}
	return (NULL);
}

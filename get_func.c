#include "main.h"

/**
 * get_func - search and select the correct function
 * @s: array to check
 *
 * Return: pointer to a function
 */

int (*get_func(char s))(va_list)
{
	int i;

	op_t ops[] = {
		{"c", print_c}, {"d", print_d},
		{"s", print_s}, {"i", print_i},
		{"b", print_b}, {"o", print_o},
		{"x", print_x}, {"u", print_u},
		{NULL, NULL}
	};

	for (i = 0; ops[i].c != NULL; i++)
	{
		if (*ops[i].c == s)
			return (ops[i].f);
	}

	return (NULL);
}

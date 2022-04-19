#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct op - struct for function objects
 * @c: flag
 * @f: function
 */

typedef struct op
{
	char *c;
	int(*f)(va_list);
} op_t;

int _printf(const char *format, ...);
int _putchar(char c);

#endif

#include "main.h"

/**
 * print_x - takes an unsigned int and prints it in lowercase hex notation
 * @ar_list: unsigned int to print
 *
 * Return: number of digits printed
 */
int print_x(va_list ar_list)
{
	return (print_hex(va_arg(ar_list, unsigned int), 0));
}

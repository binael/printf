#include "main.h"

/**
 * print_X - takes am unsigned int and prints it in uppercase hex notation
 * @X: unsigned int to print
 *
 * Return: number of digits printed
 */

int prnt_X(va_list ar_list)
{
	return (print_hex(va_arg(ar_list, unsigned int), 1));
}

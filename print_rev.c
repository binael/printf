#include "main.h"
#include <string.h>

/**
* print_r - reverses string
* @ar_list: Store the a list of characters
* Return: num of parameters printed
*/
int print_rev(va_list ar_list)
{
	int i, j, count = 0;
	char *str;

	str = va_arg(ar_list, char *);
	if (str == NULL)
		str = "(null)";

	j = strlen(str);

	for (i = j - 1; i >= 0; i--)
		count += _putchar(str[i]);

	return (count);
}

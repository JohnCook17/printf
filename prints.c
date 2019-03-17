#include "holberton.h"
/**
 * prints - prints a string
 * @list: list of values to print
 */
int prints(va_list list)
{
	int i = 0;
	char *s = va_arg(list, char *);

	while (s)
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

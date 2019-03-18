#include "holberton.h"
/**
 *print_number - find largest prime factor
 *@n: integer value.
 *@j: integer value.
 *
 *Return: j value.
 */
int print_number(int n, int j)
{
	unsigned int i;

	i = n;
	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	if (i / 10 != 0)
	{
		print_number(i / 10);
		j++;
	}
	_putchar(i % 10 + '0');
	return (j);
}
/**
 *print_i - print integer.
 *@list: list of arguments.
 *
 *Return: j.
 */
int print_i(va_list list)
{
	static int j;

	print_number(list, j)
		return (j);
}

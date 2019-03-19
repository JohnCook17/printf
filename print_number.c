#include "holberton.h"
/**
 *print_number - prints a number with recursion.
 *@n: integer value.
 *
 *Return: Nothing.
 */
void print_number(int n)
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
	}
	_putchar(i % 10 + '0');
}
/**
 *count - count number of recursion.
 *@n: number value.
 *
 *Return: the count of recursion.
 */
int count(int n)
{
	unsigned int j;

	j = n;
	if (n < 0)
	{
		j = -n;
		j = j * 10;
	}
	if (j < 10)
		return (1);
	return (1 + count(j / 10));

}
/**
 *print_i - print integer.
 *@list: list of arguments.
 *
 *Return: j.
 */
int print_i(va_list list)
{
	int n = va_arg(list, int);

	print_number(n);
	return (count(n));
}

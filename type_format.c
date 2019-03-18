#include "holberton.h"
/**
 * print_c - print character.
 * @list: argument lists.
 *
 * Return: Nothing.
 */
int print_c(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
/**
 * print_s - print string.
 * @list: argument lists.
 *
 * Return: Nothing.
 */
int print_s(va_list list)
{
	int count;
	char *s  = va_arg(list, char *);

	if (s == NULL)
		s = "(null)";
	for (count = 0; s; s++, count++)
		_putchar(*s);
	return (count);
}

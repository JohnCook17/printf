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
	int i;
	char *s = va_arg(list, char*);

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
		_putchar(s[i]);
	return (i);
}

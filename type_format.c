#include "holberton.h"
/**
 * printc - print character.
 * @list: argument lists.
 *
 * Return: Nothing.
 */
int printc(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
/**
 * prints - print string.
 * @list: argument lists.
 *
 * Return: Nothing.
 */
int prints(va_list list)
{
	int i;
	char *s = va_arg(list, char*);

	if (s)
	{
		for (i = 0; s[i]; i++)
			_putchar(s[i]);
	}
	return (i);
}
/**
 * printp - print percentage.
 *@list: argument lists.
 *
 *Return: Nothing.
 */
int printp(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}

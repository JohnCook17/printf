#include "holberton.h"
/**
 * printc - print character.
 * @list: argument lists.
 *
 * Return: Nothing.
 */
void printc(va_list list)
{
	_putchar(va_arg(list, int));
}
/**
 * prints - print string.
 * @list: argument lists.
 *
 * Return: Nothing.
 */
void prints(va_list list)
{
	int i;
	char *s = va_arg(list, char*);

	if (s)
		_putchar('');
	for (i = 0; s[i]; i++)
		_putchar(s[i]);
}

#include "holberton.h"

int print_r(va_list list)
{
	char *str = va_arg(list, char *);
	char *rev;
	int len = 0;
	int i;

	while (*str++)
		len++;
	rev = malloc(sizeof(len) * char);
	for (i = 0; i < len; i++)
	{
		rev[i] = str[len];
		len--;
	}
	rev[i] = '\0';
	for (i = 0, rev[i], i++)
		_putchar(rev[i]);
	free(rev);
	return (i);
}

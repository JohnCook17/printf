#include "holberton.h"

int print_rot(va_list list)
{
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *comp = va_arg(list, char *);
	int i;
	int j;

	for (i = 0; comp[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (comp[i] == alpha[j])
			{
				_putchar(rot13[j]);
			}
		}
	}
	return (i);
}

#include "holberton.h"

void per (va_list c)
{
	int i = 0;
	int j = 0;
	format f[] = {
		{"c", printc},
		{"s", prints},
		{"d", printd},
		{"i", printi},
		{"%", printp},
		{NULL, NULL}
	};

	while (c)
	{
		if (c[i] == '%')
		{
			while (f[j].type)
			{
				if (c[i + 1] == *f[j].type)
				{
					f[j].func(c);
				}
				j++;
			}
		}
		else
			_putchar(c[i]);
		i++;
	}

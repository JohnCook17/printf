#include "holberton.h"
#include <stdio.h>
int op_type(const char pointer, va_list list)
{
	int i;
	form_t f[] = {
		{"c", print_c},
		{"s", print_s},
		/*	{"d", print_i},
			{"i", print_i},*/
		{NULL, NULL}
	};
 	for (i = 0; i < 2; i++)
		if (pointer == *f[i].type)
			return (f[i].func(list));
	return (0);
}

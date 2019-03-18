 #include "holberton.h"
#include <stdio.h>
int op_type(const char *pointer, va_list list)
{
	int i;
	int count = 0;
	form_t f[] = {
		{"c", print_c},
		{"s", print_s},
		/*	{"d", print_i},
			{"i", print_i},*/
		{NULL, NULL}
	};

 	for (i = 0; f[i].type; i++)
		if (pointer == f[i].type)
 			count += f[i].func(list);
	return (count);
}

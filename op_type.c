#include "holberton.h"
#include <stdio.h>
/**
 * op_type - struct to determine func to call
 * @pointer: pointer to format from printf
 * @list: variadic list
 *
 * Return: returns count form function called, or 0
 */
int op_type(const char pointer, va_list list)
{
	int i;
	form_t f[] = {
		{"c", print_c},
		{"s", print_s},
	};

	for (i = 0; i < 2; i++)
		if (pointer == *f[i].type)
			return (f[i].func(list));
	return (0);
}

#include "holberton.h"
#include <stdio.h>
/**
 * op_type - struct to determine func to call
 * @pointer: pointer to format from printf
 *
 * Return: returns count form function called, or 0
 */
int (*op_type(char pointer))(va_list)
{
	int i;
	form_t f[] = {
		{'c', print_c},
		{'s', print_s},
		{'i', print_i},
		{'d', print_i},
		{'R', print_rot}
	};

	for (i = 0; i < 5; i++)
		if (pointer == f[i].type)
			return (f[i].func);
	return (NULL);
}

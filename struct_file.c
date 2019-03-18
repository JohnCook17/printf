#include "holberton.h"
/**
 *struct_type - pointer to function.
 *@s: operator passed as argument.
 *
 *Return: NULL if not matches.
 */
int (*struct_type(char *s))(va_list)
{
	form_t f[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (f[i].type)
	{
		if (f[i].type == s)
			return (f[i].func);
		i++;
	}
	return (NULL);
}

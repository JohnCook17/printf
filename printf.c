#include "holberton.h"
/**
 * _printf - Replicates the printf function
 * @format: The input given
 *
 * Return: returns the characters printed
 */
int _printf(const char *format, ...)
{
	const char *pointer;
	int j = 0;
	int count = 0;
	va_list list;
	form_t f[] = {
		{"c", print_c},
		{"s", print_s},
		/**{"d", print_i},
		   {"i", print_i},*/
		{NULL, NULL}
	};

	va_start(list, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	for (pointer = format; *pointer; pointer++)
	{
		if (pointer == '%')
		{
			pointer++
			if (*pointer == '%')
			{
				_putchar('%');
				count++;
				continue;
			}
/* rewrite */
			for (j = 0; f[j].type; j++)
			{
				if (pointer == *f[j].type)
				{
					count += f[j].func(list);
				}
			}
/* rewrite */
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(list);
	return (count);
}

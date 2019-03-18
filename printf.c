#include "holberton.h"
/**
 * _printf - Replicates the printf function
 * @format: The input given
 *
 * Return: returns the characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int j = 0;
	int x = 0;
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
	for (i = 0; format[i] != '\0', i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
				_putchar('%');
			for (j = 0; f[j].type; j++)
			{
				if (format[i + 1] == *f[j].type)
				{
					x = f[j].func(list);
					i++;
				}
			}
		}
		else if (format[i] != '\0')
			_putchar(format[i]);
	}
	va_end(list);
	return (x + i);
}

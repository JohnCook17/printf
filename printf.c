#include "holberton.h"
/**
 * _printf - Replicates the printf function
 * @format: The input given
 *
 * Return: returns the characters printed
 */
int _printf(const char *format, ...)
{
	int (*pointer_func)(va_list);
	const char *pointer;
	int count = 0;
	va_list list;

	va_start(list, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	for (pointer = format; *pointer; pointer++)
	{
		if (*pointer == '%')
		{
			pointer++;
			if (*pointer == '%')
			{
				_putchar('%');
				count++;
				continue;
			}
			pointer_func = op_type(*pointer);
			if (!pointer_func)
			{
				count += _putchar('%');
				count += _putchar(*pointer);

			} else
				count += pointer_func(list);
		}
		else
		{
			_putchar(*pointer);
			count++;
		}
	}
	va_end(list);
	return (count);
}

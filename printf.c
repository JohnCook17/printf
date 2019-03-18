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
			count += op_type(*pointer, list);
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

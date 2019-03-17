#include "holberton.h"

int _printf(const char *format, ...)
{
	int i = 0;
	int j = 0;
	va_list list;
	form_t f[] = {
		{"c", printc},
		{"s", prints},
		/*{"d", printd},*/
		/*{"i", printi},*/
		{NULL, NULL}
	};

	va_start(list, format);
	while (format && format[j] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
				_putchar('%');
			while (f[j].type)
			{
				if (format[i + 1] == *f[j].type)
				{
					f[j].func(list);
				}
				j++;
			}
		}
		else
			_putchar(format[i]);
		i++;
	}
	va_end(list);
	return (0);
}

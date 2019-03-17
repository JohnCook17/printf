#include "holberton.h"

int _printf(const char *format, ...)
{
	int i = 0;
	int j = 0;
	int x;
	va_list list;
	form_t f[] = {
		{"c", printc},
		{"s", prints},
		/*{"d", printd},*/
		{"i", printi},
		{NULL, NULL}
	};

	va_start(list, format);
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
				_putchar('%');
			while (f[j].type)
			{
				if (format[i + 1] == *f[j].type)
				{
					x = f[j].func(list);
					i++;
				}
				j++;
			}
		}
		else if (format[i] != '\0')
			_putchar(format[i]);
		i++;
	}
	va_end(list);
	return (x);
}

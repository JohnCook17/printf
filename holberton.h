#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct form - format info for string
 * @type: type of formatting to take place
 * @func: type of function to call for formating
 */
typedef struct form
{
	char type;
	int (*func)(va_list list);
} form_t;
int print_i(va_list list);
int _printf(const char *format, ...);
int _putchar(char c);
int (*op_type(char c))(va_list);
int print_c(va_list list);
int print_s(va_list list);
int print_rot(va_list list);
#endif /* HOLBERTON_H */

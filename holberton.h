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
	char *type;
	int (*func)(va_list list);
} form_t;

int _printf(const char *format, ...);
int _putchar(char c);
int per(va_list s);
int printc(va_list s);
int prints(va_list s);
int printd(va_list s);
int printi(va_list s);
int printp(va_list s);

#endif /* HOLBERTON_H */

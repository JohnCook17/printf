#ifndef HOLBERTON_H
#define HOLBERTON_H
/**
 * struct form - format info for string
 * @type: type of formatting to take place
 * @func: type of function to call for formating
 */
typedef struct form
{
	char *type;
	void (*func)(va_list);
} format;

int _putchar(char c);
char *simpleprint(va_list l);
void per(va_list s);
void printc(va_list s);
void prints(va_list s);
void printd(va_list s);
void printi(va_list s);

#endif /* HOLBERTON_H */

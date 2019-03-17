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
void printc(char *s);
void prints(char *s);
void printd(char *s);
void printi(char *s);

#endif /* HOLBERTON_H */

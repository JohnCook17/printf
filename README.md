# 0x10. C - Printf

## Author

[John Cook](https://github.com/JohnCook17)

[Van Phan](https://github.com/vdphan)

## Synopsis
We created a simple function of printf function to print input data.

The **prototype** that we used:

**int _printf(const char *format, ...);**

*format is a character string. The format string is composed of zero or more directives.

---

## Description
The _printf() function is built based on our _putchar(). This _printf() write output to stdout, the standard output stream. The function returns  the number of characters printed (excluding the null byte used to end output to strings) or return -1 if the function fails.

_printf() function creates output based on the following format specifier:

##### Format Specifiers and Example

| Function | Format specifier | Usage | Example |
| --- | --- | --- | --- |
| print_c | %c | Print a character | _printf("%c", 'h') _Prints character _h_ |
| print_s | %s | Print a string | _printf("Hello %s\n", "World") _Prints "Hello World" followed by a new line_ |
| print_i | %i & %d | Print an integer | _printf("%d and %i\n", 777, 888) _printf two decimal number 777 & 888 followed by a new line_ |

## File list

| File name | Description |
| --- | --- |
| _putchar.c | create own putchar function |
| holberton.h | Header file contains all header and prototype |
| op_type.c | Create the structure of all format and their function |
| print_number.c | Create print_i function and its helper functions |
| type_format.c | Contains print_c and print_s functions. |
| printf.c | The main file to execute all function |

## Compilation
All the files were compiled on Ubuntu 14.04 LTS

All programs and functions were compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic.
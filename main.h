#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>



/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

/*putchar prototype */

int _putchar(char c);

/*prints characters */
int printf_char(va_list list);
int print_string(va_list list);
int _strlen(char *s);
int _strlenc(const char *s);
int print_37(void);

int print_integer(va_list list);
int print_dec(va_list list);

int _printf(const char *format, ...);

#endif

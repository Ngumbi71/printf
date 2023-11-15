#include "main.h"

/**
 * print_char - function that prints a character.
 * @list: arguments.
 * Return: an integer
 */
int print_char(va_list list)
{
	char t;

	t = va_arg(list, int);
	_putchar(t);
	return (1);
}

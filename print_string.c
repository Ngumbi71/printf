#include "main.h"
/**
 * print_s - print a string.
 * @list: argumen t.
 * Return: the length of the string.
 */

int print_s(va_list list)
{
	char *s;
	int a, len;

	s = va_arg(list, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (a = 0; a < len; a++)
			_putchar(s[a]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (a = 0; a < len; a++)
			_putchar(s[a]);
		return (len);
	}
}

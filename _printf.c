#include "main.h"

/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert p[] = {
		{"%s", print_s}, {"%c", printf_char},
		{"%%", print_40},
		{"%i", print_integer}, {"%d", print_dec}
	};

	va_list list;
	int i = 0, j, length = 0;

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
			{
				length += p[j].function(list);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(list);
	return (length);
}

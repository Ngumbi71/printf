#include "main.h"

/**
 *
 * printf_char- prints a character.
 * @list: arguments.
 * return: 1.
 */

int printf_char(va_list list)
{
	char str;

	str = va_arg(list, int);
	_putchar(str);
	return (1);
}

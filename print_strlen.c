#include "main.h"

/**
 * _strlen - finds the length of a string.
 * @s: the string
 * Return: an integer.
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}

/**
 * _strlenc -  length of a string(constant characters)
 * @s: a string
 * Return: an integer
 */

int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}

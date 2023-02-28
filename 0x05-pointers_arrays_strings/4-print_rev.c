#include "main.h"

/**
 * print_rev - print the string in reverse
 * @s: The pointer to char
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len, i;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

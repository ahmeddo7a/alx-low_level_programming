#include "main.h"

/**
 * _puts - print a string
 * @str: char *string
 *
 * Return: void prints the string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

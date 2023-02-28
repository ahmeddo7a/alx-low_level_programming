#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: The pointer to String
 *
 * Return: void
 */

void puts_half(char *str)
{
	int a;
	int i;
	int length;

	length = 0;

	for (a = 0; str[a] != '\0'; a++)
		length++;

	i = (length / 2);

	if ((length % 2) == 1)
		i = ((length + 1) / 2);

	for (a = i; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

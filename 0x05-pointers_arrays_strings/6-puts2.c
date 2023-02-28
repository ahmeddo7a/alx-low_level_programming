#include "main.h"
/**
 * puts2 - prints every other character
 * @str: The pointer to every char
 *
 * Return: void print every other character
 */

void puts2(char *str)
{
	int length;
	char *y = str;
	int i;

	length = 0;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	length--;
	for (i = 0 ; i <= length ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}

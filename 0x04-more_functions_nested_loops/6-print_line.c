#include "main.h"

/**
 * print_line - draw a st line in terminal
 * @n: number of times of char
 */

void print_line(int n)
{
	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}

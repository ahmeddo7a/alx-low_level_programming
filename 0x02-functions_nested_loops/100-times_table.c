#include "main.h"
#include <stdio.h>

/**
 * print_times_table - print numbers to 98X
 * @n: times number table
 *
 * Return: times table to n
 */

void print_times_table(int n)
{
	int x, y, z;

	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (y == 0)
				{
					_putchar(z + 48);
				}
				else if (z < 10 && y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(32);
					_putchar(z + 48);
				}
				else if (z >= 10 && z < 100)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar((z / 10) + 48);
					_putchar((z % 10) + 48);
				}
				else if (z >= 100)
				{
					_putchar(44);
					_putchar(32);
					_putchar((z / 100) + 48);
					_putchar(((z / 10) % 10) + 48);
					_putchar((z % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}

#include "main.h"
#include <stdio.h>

/**
 * times_table - print the 9X times table
 * @void
 *
 * Return: Success return the 9X times table
 */

void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if ((x * y) > 9)
			{
				z = x * y;
				_putchar((z / 10) + 48);
				_putchar((z % 10) + 48);
				_putchar(44);
				_putchar(32);
			}
			else
			{
				_putchar((x * y) + 48);
				_putchar(44);
				_putchar(32);
				if ((x * (y + 1)) < 10)
				{
					_putchar(32);
				}

			}
		}
		putchar('\n');
	}
}

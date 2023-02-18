#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program prints digits which are different '
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int x;
	int y;

	x = 48;
	y = 48;

	for (i = 48; i <= 57 ; i++)
	{
		for (j = 48; j <= 57 ; j++)
		{
			if (x == i && j < y + 1)
			{
				continue;
			}
			putchar(i);
			putchar(j);
			if (i != 56 && y != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
		x++;
		y++;

	}
	putchar('\n');
	return (0);
}

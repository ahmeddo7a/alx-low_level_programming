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
       int c;

	c = 0;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(32);
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
				{
					putchar(44);
					putchar(32);
				}
				c++;
			}
		}
	}
	putchar('\n');
	printf("total : %d \n", c);
	return (0);
}

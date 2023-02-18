#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program prints from a - z using putchar function '
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}

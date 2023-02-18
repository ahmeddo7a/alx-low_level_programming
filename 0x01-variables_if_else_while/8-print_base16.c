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
	int num;

	num = 0;

	while (num < 16)
	{
		printf("%x", num);
		num++;
	}
	putchar('\n');
	return (0);
}

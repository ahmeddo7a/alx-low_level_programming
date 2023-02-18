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
	int ascii;

	ascii = 122;

	while (ascii > 96)
	{
		putchar(ascii);
		ascii--;
	}
	putchar('\n');
	return (0);
}

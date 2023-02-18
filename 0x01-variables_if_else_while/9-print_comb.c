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

	ascii = 48;

	while (ascii < 58)
	{
		putchar(ascii);
		if (ascii != 57)
		{
			putchar(44);
			putchar(32);
		} else
		{
			putchar('\n');
		}
		ascii++;
	}
	return (0);
}

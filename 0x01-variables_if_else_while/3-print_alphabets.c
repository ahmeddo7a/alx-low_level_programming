#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'program prints lower & upper using putchar function '
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int initial_lowercase_ascii;
	int initial_uppercase_ascii;

	initial_lowercase_ascii = 97;
	initial_uppercase_ascii = 65;

	while (initial_lowercase_ascii < 123)
	{
		putchar(initial_lowercase_ascii);
		initial_lowercase_ascii++;
	}
	while (initial_uppercase_ascii < 91)
	{
		putchar(initial_uppercase_ascii);
		initial_uppercase_ascii++;
	}
	putchar('\n');
	return (0);
}

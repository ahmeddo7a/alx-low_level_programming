#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - print all alphabets
 * @void
 *
 * Return: void
 */

void print_alphabet(void)
{
	int x;

	for (x = 97; x < 123; x++)
	{
		putchar(x);
	}
	putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
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

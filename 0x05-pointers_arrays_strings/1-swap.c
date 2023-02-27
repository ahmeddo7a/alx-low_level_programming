#include "main.h"

/**
 * swap_int - swap two numbers
 * @a: first number to swap
 * @b: second number to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *b;
	*b = *a;
	*a = x;
}

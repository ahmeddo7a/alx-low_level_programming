#include "main.h"
#include <stdio.h>

/**
 * print_array - print the array
 * @a: Array variable
 * @n: number of elements of array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_array(int *a, int n)
{
	int i;
	int element;

	for (i = 0; i < n; i++)
	{
		element = a[i];
		if ((i + 1) < n)
		{
			printf("%d, ", element);
		}
		else
		{
			printf("%d", element);
		}
	}
	printf("\n");
}

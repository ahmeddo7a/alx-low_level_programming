#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - check if an integer is a prime number or not
 * @n: number to check
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime_number(n, n - 1));
}

/**
 * _prime_number - check if an integer is a prime number or not
 * @n: number to check
 * @x: counter
 * Return: 1 if n is a prime number, 0 if not
 */
int _prime_number(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0)
		return (0);
	return (_prime_number(n, x - 1));
}

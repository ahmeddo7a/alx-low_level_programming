#include "main.h"
#include <stdio.h>

/**
 * str_to_int - Convert String to Int
 * @s: String which will be converted
 *
 * Return: Success will return the integer value
 */
int str_to_int(char *s)
{
	int x, y, z, len, flag, digit;

	x = 0;
	y = 0;
	z = 0;
	len = 0;
	flag = 0;
	digit = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (x < len && flag == 0)
	{
		if (s[x] == '-')
			++z;
		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';

			if (z % 2)
				digit = -digit;
			y = y * 10 + digit;
			flag = 1;

			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			flag = 0;
		}
		x++;
	}
	if (flag == 0)
		return (0);

	return (y);
}

/**
 * main - Multiply two numbers from main args
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 If success & 1 If Error
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	result = 0;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = str_to_int(argv[1]);
	num2 = str_to_int(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}

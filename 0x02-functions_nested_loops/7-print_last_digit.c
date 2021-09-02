#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @a: Number to check.
 *
 * Return: 0 or 1
 */

int print_last_digit(int a)
{
	int n;

	if (a < 0)
	{
		n = -1 * (a % 10);
	}

	else
	{
		n = a % 10;
	}

	_putchar(n + '0');

	return (n);
}

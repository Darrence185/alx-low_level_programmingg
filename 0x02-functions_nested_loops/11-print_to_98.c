#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from a specified number to 98
 *
 * @a: Specified number
 *
 * Return: 0
 */

void print_to_98(int a)
{
	while (a < 98)
	{
		printf("%i, ", a);
		a++;
	}

	while (a > 98)
	{
		printf("%i, ", a);
		a--;
	}

	printf("98");
	putchar('\n');

}

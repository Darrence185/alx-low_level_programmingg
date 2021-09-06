#include <stdio.h>
#include "holberton.h"

/**
 *print_array - print array elements.
 *
 *@a: points to int type.
 *@n: type int.
 *
 *Return: not.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

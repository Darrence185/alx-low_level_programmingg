#include "holberton.h"

/**
 * swap_int - swap parameter values.
 *
 * @a: pointer to an int.
 * @b: pointer to an int.
 *
 * Return: void, nothing
 */
void swap_int(int *a, int *b)
{
	int h = *a;
	*a = *b;
	*b = h;

}

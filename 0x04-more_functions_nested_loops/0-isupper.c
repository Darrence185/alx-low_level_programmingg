#include "holberton.h"
/**
 * _isupper - checks for uppercase characters.
 *
 * @c: accept 1 parameter of type int.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}

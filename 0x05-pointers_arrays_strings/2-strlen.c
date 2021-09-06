#include "holberton.h"

/**
 * _strlen - swap parameter values.
 *
 * @s: pointer to a char.
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		s++;
		counter++;
	}
	return (counter);
}

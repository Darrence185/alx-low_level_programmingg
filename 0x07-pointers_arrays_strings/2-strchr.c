#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - locate character in string.
 *
 * @s: string.
 * @c: type char.
 *
 * Return: pointer to type char.
 */
char *_strchr(char *s, char c)
{
	int k = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			k++;
			break;
		}
		s++;
	}
	if (k == 1)
		return (s);
	else
		return (0);
}

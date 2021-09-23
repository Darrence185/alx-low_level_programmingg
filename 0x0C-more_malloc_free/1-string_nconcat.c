#include <stdlib.h>
#include "holberton.h"
int _strlen(char *s);
/**
 * string_nconcat - concatenate two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: num of bytes to be apended from s2.
 * Return: pointer to allocated memory containing s1 folowed by nbytes of s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, lens1 = 0, lens2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lens1 = ((unsigned int)_strlen(s1));
	lens2 = ((unsigned int)_strlen(s2));
	if (n < lens2)
		lens2 = n;
	str = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < lens1; i++)
		str[i] = s1[i];
	for (j = 0; j < lens2; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/**
 * _strlen - get string length.
 * @s: pointer to a char.
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

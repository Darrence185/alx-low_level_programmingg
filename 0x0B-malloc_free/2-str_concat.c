#include <stdlib.h>
#include "holberton.h"
int _strlen(char *s);

/**
 * str_concat -  returns a pointer to a newly allocated space in memory
 * which contains the string value of concatenation of s2 upon s1.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer to array of char.
 */
char *str_concat(char *s1, char *s2)
{
	int lens1, lens2;
	int i, k;
	char *arr;

	lens1 = _strlen(s1);
	lens2 = _strlen(s2);
	arr = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		if (s1)
		{
			for (i = 0; i < lens1; i++)
			{
				arr[i] = s1[i];
			}
		}
		if (s2)
		{
			k = 0;
			while (k < lens2)
			{
				arr[i] = s2[k];
				i++;
				k++;
			}
		}
		arr[i] = '\0';
		return (arr);
	}
}
/**
 * _strlen - compute string length.
 *
 * @s: pointer to a string.
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

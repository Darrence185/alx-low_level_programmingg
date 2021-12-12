#include "main.h"
/**
  *_strpbrk - locates the first occurrence in string
  *		s of any of the bytes in string accept
  *@s: string
  *@accept: set of bytes to be searched for
  *
  *Return: pointer to matched byte
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
#include "main.h"
/**
  * *_strncat - concatenates two string
  * @src: source value
  * @dest: destination value
  * @n: the number of bytes determining null termination
  *
  * Return: a pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int destl = 0;
	int i = 0;

	while (dest[destl])
	{
		destl++;
	}
	while (i < n && src[i])
	{
		dest[destl] = src[i];
		destl++;
		i++;
	}
	dest[destl + n + 1] = '\0';
	return (dest);
}
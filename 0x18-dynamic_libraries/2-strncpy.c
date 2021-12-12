#include "main.h"
/**
  * *_strncpy - copies a string
  * @src: te source value
  * @dest: destination value
  * @n: the limit for the copy
  *
  * Return: a pointer dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;


	while (src[j])
	{
		j++;
	}
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
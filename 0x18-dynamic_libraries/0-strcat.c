#include "main.h"
/**
  * *_strcat - appends the src string to the dest string
  * @src: the source string
  * @dest: the destination string
  *
  * Return: a pointerto the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int destl = 0;
	int i;

	while (dest[destl])
	{
		destl++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[destl] = src[i];
		destl++;
	}
	dest[destl] = '\0';
	return (dest);
}
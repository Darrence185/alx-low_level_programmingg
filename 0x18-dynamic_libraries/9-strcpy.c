#include "main.h"
/**
  * char *_strcpy - copies the string
  * @src: source
  * @dest: destiny
  * Return: dest
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];

	return (dest);
}
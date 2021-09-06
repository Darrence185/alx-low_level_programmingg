#include "holberton.h"

/**
 * _strcpy - copies the string including \0 to buffer pointed to.
 *
 * @dest: pointer where string is copied.
 * @src: string arg to be copied.
 *
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int i;
int sl = 0;

while (src[sl] != '\0')
{
sl++;
}

for (i = 0; i < sl; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}

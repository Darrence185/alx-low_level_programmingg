#include "main.h"
/**
  * _strcmp - compares two strings
  * @s1: a first pointer
  * @s2: a second pointer
  *
  * Return: 0
  */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
#include <stdlib.h>
#include "holberton.h"

/**
 * *argstostr - concatenates argument(s) of program.
 * @ac: number of arguments.
 * @av: array of arguments.
 * Return: pointer to new string,else if NULL == error.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *args;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	args = malloc(sizeof(char) * (len + 1));
	if (args == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			args[k] = av[i][j];
			k++;
		}
		args[k] = '\n';
		k++;
	}
	return (args);
}

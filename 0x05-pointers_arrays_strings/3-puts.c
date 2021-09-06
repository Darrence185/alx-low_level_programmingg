#include "holberton.h"

/**
 *_puts - print string to stdout.
 *
 *@str: value to be evaluate.
 *
 *Return: nothing, void.
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_alphabet - print alphabets to lowercases
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');

}

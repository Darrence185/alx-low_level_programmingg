#include "holberton.h"
/**
 * print_numbers - prints 0 - 9, newline.
 *
 * @void: Does not accept arguments.
 *
 * Return: void - has no return value.
 */
void print_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
_putchar(i);
}
_putchar('\n');
}

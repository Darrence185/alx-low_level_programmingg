#include "holberton.h"
/**
 * print_most_numbers - prints 0 - 9 exept 2, 4, newline.
 *
 * @void: Does not accept arguments.
 *
 * Return: void - has no return value.
 */
void print_most_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
if (i != '2' && i != '4')
{
_putchar(i);
}
}
_putchar('\n');
}


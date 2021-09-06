#include "holberton.h"

/**
 * puts_half - print last half of  string.
 *
 * @str: string array of type char.
 *
 * Return: void.
 */
void puts_half(char *str)
{
char *t = str;
int sl = 0;
int i;

while (*t != '\0')
{
t++;
sl++;
}
if (sl % 2 == 0)
{
	i = sl / 2;
}
else
{
	i = (sl + 1) / 2;
}
while (i < sl)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}

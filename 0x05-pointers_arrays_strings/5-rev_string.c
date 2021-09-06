#include "holberton.h"

/**
 * rev_string - reverse string.
 *
 * @s: string array of type char.
 *
 * Return: void.
 */
void rev_string(char *s)
{
int sl = 0;
char *t = s;
int i = 0;
int _index = 0;
int _i;
char r;

while (*t != '\0')
{
t++;
sl++;
}
_index = sl - 1;
_i = _index;
while (i < ((_i / 2) + 1))
{
r = s[i];
s[i] = s[_index];
s[_index] = r;
i++;
_index--;
}
}

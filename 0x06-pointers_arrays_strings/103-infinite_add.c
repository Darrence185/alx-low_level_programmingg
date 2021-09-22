#includ "main.h"

/**
 * infinite_add - Add 2 integers.
 *
 * @n1: integer
 *
 * @n2: integer
 *
 * @r: buffer
 *
 * size_r: size of r
 *
 * Return: char
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c = 0, y = 0, z;
	char *s1 = n1, *s2 = n2;

	while (*s1 != 0)
		s1++;
	while (*s2 != 0)
		s2++;
	size_r--;
	r[size_r] = 0;
	s1--;
	s2--;

	while (s2 != n2 - 1 && s1 != n1 - 1)
	{
		r[y] = *s2 - '0' + *s1 + c;
		c = 0;

		if (r[y] > '9')
		{
			c++;
			r[y] -= 10;
		}

		y++;
		s2--;
		s1--;

		if (size_r == y && (s1 != n1 - 1 || s2 != n2 - 1 || c == 1))
			return (0);
	}

	while (s1 != n1 - 1)
	{
		r[y] = *s1 + c;
		c = 0;

		if (r[y] > '9')
		{
			c = 1;
			r[y] -= 10;
		}

		s1--;
		y++;

		if (size_r == y && (s1 != n1 - 1 ||  c == 1))
			return (0);
	}

	while (s2 != n2 - 1)
	{
		r[y] = *s2 + c;
		c = 0;

		if (r[y] > '9')
		{
			c = 1;
			r[y] -= 10;
		}

		s2--;
		y++;

		if (size_r == y && (s2 != n2 - 1 || c == 1))
			return (0);
	}

	if (c == 1)
	{
		r[y] = '1';
		r[y + 1] = 0;
	}

	else
	{
		r[y--] = 0;
	}

	z = 0;

	while (z <= y)
	{
		c = r[y];
		r[y] = r[z];
		r[z] = c;
		y--;
		z++;
	}

	return (r);
}

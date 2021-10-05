#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - perform simple operations [+, -, *, /, %]
 * @argc: argument count
 * @argv: argument(s) in string value
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b, res;
	char opr;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	opr = *argv[2];
	if ((opr == '/' || opr == '%') && (a == 0 || b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	res = func(a, b);
	printf("%d\n", res);
	return (0);
}

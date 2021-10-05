#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - compute and return sum of its parameters
 * @n: fixed argument, type unsigned int
 * @...: optional argument(s)
 * Return: sum of parameters, type int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list dgts;

	va_start(dgts, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(dgts, int);
	}
	va_end(dgts);
	return (sum);
}

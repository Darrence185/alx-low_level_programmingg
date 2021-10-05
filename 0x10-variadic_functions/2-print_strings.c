#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings followed by \n
 * @separator: const string printed between string args
 * @n: fixed argument, type unsigned int
 * @...: optional argument(s)
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *s;

	if (n != 0)
	{
		va_start(str, n);
		for (i = 0; i < n; i++)
		{
			s = va_arg(str, char *);
			if (s == NULL)
				printf("(nil)");
			else
			{
				printf("%s", s);
				if (i != n - 1 && separator != NULL)
					printf("%s", separator);
			}
		}
		va_end(str);
	}
	printf("\n");
}

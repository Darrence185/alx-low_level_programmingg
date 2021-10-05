#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_all - print any type of args followed by \n
 * @format: const format pointer to const char, format specifier
 * @...: optional argument(s)
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i;
	int in;
	char ch;
	float fl;
	char *st;
	va_list param;

	va_start(param, format);
	if (format == NULL)
		return;
	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 's' :
				st = va_arg(param, char *);
				if (st == NULL)
					printf("(nil)");
				else
					printf("%s", st);
				break;
			case 'c' :
				ch = va_arg(param, int);
				printf("%c", ch);
				break;
			case 'i' :
				in = va_arg(param, int);
				printf("%d", in);
				break;
			case 'f' :
				fl = va_arg(param, double);
				printf("%f", fl);
				break;
			default :
				break;
		}
		if (format[i + 1] != '\0' && (format[i] == 's' || format[i] == 'c' || 
					format[i] == 'i' || format[i] == 'f'))
			printf(", ");
		i++;
	}
	va_end(param);
	printf("\n");
}

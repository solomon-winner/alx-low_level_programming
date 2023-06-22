#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - ... ...
 * @separator: is the string to be printed betweent the strings
 * @n: number of strings passed to the function
 * Return: ... ...
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int counter = 0;
	va_list ap;

	va_start(ap, n);
	while (counter < n)
	{
		char *a;

		a = va_arg(ap, char *);
		if (a == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", a);
		}
		if (separator != NULL && (counter + 1) != n)
			printf("%s", separator);
		counter++;
	}
	printf("\n");
	va_end(ap);
}

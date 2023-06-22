#include "variadic_functions.h"

/**
 * print_numbers - ... ...
 * @n: number of parameter
 * @separator: separator between two numbers
 * Return: ... ...
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int counter = 0;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
	{
		separator = "";
	}

	while (counter < n)
	{
		printf("%d", va_arg(ap, int));
		if (counter < n - 1)
			printf("%s", separator);
		counter++;
	}
	printf("\n");
	va_end(ap);
}

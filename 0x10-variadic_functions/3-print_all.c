#include "variadic_functions.h"

/**
 * print_all - ... ...
 * @format: specifies the necessary operations
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int flag;
	int counter;
	char *s;
	va_list a;

	va_start(a, format);
	counter = 0;
	while (format != NULL && format[counter] != '\0')
	{
		switch (format[counter])
		{
			case 'c':
				printf("%c", va_arg(a, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(a, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(a, double));
				flag = 0;
				break;
			case 's':
				s = va_arg(a, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[counter + 1] != '\0' && flag == 0)
			printf(", ");
		counter++;
	}
	printf("\n");
	va_end(a);
}

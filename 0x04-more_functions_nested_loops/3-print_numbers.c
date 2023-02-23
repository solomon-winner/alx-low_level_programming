#include "main.h"

/**
 * print_numbers - prints 0123456789
 * Return: void
 */
void print_numbers(void)
{
	char start = '0';
	while (start <= '9')
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}

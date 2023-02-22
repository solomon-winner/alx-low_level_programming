#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @r: the number to be computed
 * Return: returns  the value of the last digit
 */
int print_last_digit(int r)
{
	int l = r%10;

	if (l < 0)
	{
		l = l * -1;
	}
	_putchar(l+'0');
	return (l);
}

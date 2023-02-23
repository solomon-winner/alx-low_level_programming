#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the line printed
 *
 * Return: void
 */


void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

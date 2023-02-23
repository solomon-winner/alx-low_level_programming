#include "main.h"

/**
 * print_diagonal - draws a diagonal line 
 * @n: the number of times \ printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, indent;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (indent = 0; indent < i; indent++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}

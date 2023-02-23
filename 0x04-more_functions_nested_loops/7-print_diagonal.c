#include "main.h"

/**
 * print_diagonal - print slash
 * @n: number of slash
 */

void print_diagonal(int n)
{
	int i = 0;
	int indent;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (indent = 0; indent < i; indent++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

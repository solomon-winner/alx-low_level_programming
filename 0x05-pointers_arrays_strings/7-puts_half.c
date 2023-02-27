#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
	int n, counter = 0, m;

	while (str[counter] != '\0')
	{
		counter++;
	}
	n = (counter - 1) / 2;
	m = n + 1;
	if (counter % 2 == 0)
	{
		for (; m < counter; m++)
		{
		_putchar(str[m]);
		}
	}
	else
	{
		for (; n < counter; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}

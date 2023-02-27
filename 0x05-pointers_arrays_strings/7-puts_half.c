#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
	int n ,counter = 0;

	while (str[counter] != '\0')
	{
		counter++;
	}
	n = (counter - 1) / 2;
	if ((counter - 1) % 2 == 0)
	{
		for (; n < counter; n++)
		{
		_putchar(str[n]);
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

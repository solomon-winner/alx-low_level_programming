#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
	int n, counter = 0;

	while (str[counter] != '\0')
	{
		counter++;
	}
	if (counter + 1 % 2 != 0)
	{
		n = (counter - 1) / 2;
	}
	else
	{
		n = counter / 2;
	}
	n = n + 1;
		for (; n < counter; n++)
		{
			_putchar(str[n]);
		}
		_putchar('\n');
}

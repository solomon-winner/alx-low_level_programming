#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string
 * Return: void
 */
void puts2(char *str)
{
	int counter = 0;
	int c = 0;
	int m;

	while (str[counter] != '\0')
	{
		counter++;
	}
	_putchar(str[0]);
	while (m <= counter - 1)
	{
		if (c + 2 <= counter - 1)
		{
			m = c + 2;
			_putchar(str[m]);
			c++;
			counter++;
		}
	}
	_putchar('\n');
}


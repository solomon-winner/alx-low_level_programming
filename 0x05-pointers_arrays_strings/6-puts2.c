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

	while (str[counter] != '\0')
	{
		counter++;
	}
	while (c <= counter - 1)
	{
		if (c + 2 <= counter)
		{
			_putchar(str[0]);
			_putchar(str[c + 2]);
			c++;
			counter++;
		}
	}
	_putchar('\n');
}


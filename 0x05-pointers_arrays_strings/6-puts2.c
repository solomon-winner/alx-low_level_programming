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
	while (c <= counter - 1)
	{
		_putchar(str[c]);
		c + 2;
	}
	_putchar('\n');
}


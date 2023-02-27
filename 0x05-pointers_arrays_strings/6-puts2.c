#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string
 * Return: void
 */
void puts2(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter++;
	}
	_putchar('\n');
}


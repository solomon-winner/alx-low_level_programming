#include "main.h"

/**
 *_puts - prints a string
 *@str: pointer of string
 *Return: void
 */
void _puts(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter++;
	}
	_putchar('\n');
}

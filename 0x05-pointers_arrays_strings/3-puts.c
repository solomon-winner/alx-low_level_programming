#include "main.h"

/**
 *_puts - prints a string
 *@str: pointer of string 
 *Return: void
 */
void _puts(char *str)
{
	char TheString;
	while (*str++)
	{
		TheString = str + '0';
		_putchar(TheString);
	}
	_putchar('\n');
}

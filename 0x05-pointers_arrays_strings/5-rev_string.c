#include "main.h"

/**
 * print_rev - reverses a string
 * @s: the string
 * Return: void
 */
void print_rev(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	counter = counter - 1;
	while (counter >= 0)
	{
		s[counter];
		counter--;
	}
	_putchar('\n');
}

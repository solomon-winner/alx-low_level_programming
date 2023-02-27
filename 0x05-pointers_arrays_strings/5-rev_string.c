#include "main.h"

/**
 * print_rev - reverses a string
 * @s: the string
 * Return: void
 */
void print_rev(char *s)
{
	int counter = 0;
	int modifiedCounter;
	int reverse = 0;
	char swap;

	while (s[counter] != '\0')
	{
		counter++;
	}
	modifiedCounter = counter - 1;
	while (modifiedCounter >= 0 && reverse < modifiedCounter)
	{
		swap = s[modifiedCounter];
		s[reverse] = swap;
		modifiedCounter--;
		reverse++;
	}
	_putchar('\n');
}

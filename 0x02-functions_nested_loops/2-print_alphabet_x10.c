#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	for (int count = 1; count <= 10;count++)
	{
		for (char alphabet = 'a'; alphabet <= 'z';alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
 *
 *print_alphabet- the code that prints the alphabet, in lowercase, followed by a new line.
 *
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');

}

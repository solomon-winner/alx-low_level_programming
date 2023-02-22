#include "main.h"
/**
 *
 * the code prints the alphabet, in lowercase, followed by a new line.
 *
 */
void print_alphabet()
{
	char alphabet = 'a';
	
	while(alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return 0;
}

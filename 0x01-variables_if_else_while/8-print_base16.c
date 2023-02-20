#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int integers = 0;
	char characters = 'a';

	integers = '0';
	while (integers <= '9')
	{
		putchar(integers);
		integers++;
	}
	while (characters <= 'f')
	{
		putchar(characters);
		characters++;
	}
	putchar('\n');
	return (0);
}



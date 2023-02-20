#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int single = 0;

	single = '0';
	while (single <= '9')
	{
		putchar(single);
		single++;
	}
	putchar('\n');
	return (0);
}


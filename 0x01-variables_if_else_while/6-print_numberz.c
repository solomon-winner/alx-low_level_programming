#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int single = 0;
	char singleChar;

	while (single < 10)
	{
		singleChar =single + '0';
		putchar(singleChar);
		single++;
	}
	putchar('\n')
	return (0);
}


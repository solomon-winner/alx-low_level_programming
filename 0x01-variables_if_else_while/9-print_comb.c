#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int singleDigit = 0;

	singleDigit = '0';
	while (singleDigit <= '9')
	{
		putchar(singleDigit);
		putchar(',');
		putchar(' ');
		singleDigit++;
	}
	putchar('\n');
	return (0);
}


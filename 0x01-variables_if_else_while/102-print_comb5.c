#include<stdio.h>
/**
 * main- Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 0;
	int b;
	int c;

	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (c != 4949)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
			c++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}

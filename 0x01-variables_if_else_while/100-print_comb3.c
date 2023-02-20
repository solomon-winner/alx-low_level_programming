#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 0;
	int b;
	int c = 0;

	while (a <= 8)
	{
		b = a + 1;
		while (b <= 9)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (c != 44)
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

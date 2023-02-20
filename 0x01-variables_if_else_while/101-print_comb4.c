#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 0;
	int b, w;
	int c = 0;

       	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			w = b + 1;
			while (w <= 9)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(w + '0');
				if (c != 119)
				{
					putchar(',');
					putchar(' ');
				}
				w++;
			}
		b++;
		}
		a++;
	}
	 putchar('\n');
	 return (0);
}

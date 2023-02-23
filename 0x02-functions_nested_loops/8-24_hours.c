#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: Always 0
 */
void jack_bauer(void)
{
	int minute;
	int second;
	char z;
	char zs;

	for (minute = 0; minute <= 23; minute++)
	{
		if (minute < 10 && minute >= 0)
		{
			minute = minute + '0';
			z = 0 + '0';
			minute = minute + minute;
		}
		for (second = 0; second < 60; second++)
		{
			if (second < 10 && second >= 0)
			{
				second = second + '0';
				zs = 0 + '0';
				second = second + second;
			}
			_putchar(minute, ':', second);
			_putchar('\n');
		}
	}
}

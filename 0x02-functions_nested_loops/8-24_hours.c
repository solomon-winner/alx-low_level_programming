#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: Always 0
 */
void jack_bauer(void)
{
	int minute;
	int second;
	char z = '0';

	for (minute = 0; minute <= 23; minute++)
	{
		if (minute >= 0 && minute < 10)
		{
			minute = z + minute;
		}
		for (second = 0; second < 60; second++)
		{
			if (second >= 0 && second < 10)
			{
				second = z + second;
			}
			_putchar(minute +  ':' + second);
			_putchar('\n');
		}
	}
}

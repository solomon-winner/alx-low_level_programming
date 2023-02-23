#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: Always 0
 */
void jack_bauer(void)
{
	int minute;
	int second;

	for (minute = 0; minute <= 23; minute++)
	{
		for (second = 0; second < 60; second++)
		{
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar(':');
			_putchar((second / 10) + '0');
			_putchar((second % 10) + '0');
			_putchar('\n');
	}
}
}

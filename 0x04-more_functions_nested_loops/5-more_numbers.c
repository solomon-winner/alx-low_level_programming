#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * Return: void
 */
void more_numbers(void)
{
	int counter;
	char printed_number;

	for (counter = 1; counter <= 10; counter++)
	{
		for (printed_number = '0'; printed_number <= '14'; printed_number++)
		{
			_putchar(printed_number);
		}
		_putchar('\n');
	}
}

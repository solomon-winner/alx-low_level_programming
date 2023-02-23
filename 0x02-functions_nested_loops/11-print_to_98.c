#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the parameter passed to this function
 */
void print_to_98(int n)
{
        if (n < 98)
        {
                while (n <= 98)
                {
                        if (n == 98)
                        {
                                _putchar(n + '0');
                        }
			_putchar(n + '0');
			_putchar(',' + ' ');
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				_putchar(n + '0');
			}
			_putchar(n + '0');
			_putchar(',' + ' ');
			n--;
		}
	}
	else
	{
		_putchar(n);
	}
}

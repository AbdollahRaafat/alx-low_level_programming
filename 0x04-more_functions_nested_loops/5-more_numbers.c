#include "main.h"

/**
 * more_numbers - print nums (0-14) 10 times
 * Return: void
 */

void more_numbers(void)
{
	int i, n;

	n = 10;

	while (n--)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar('1');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}

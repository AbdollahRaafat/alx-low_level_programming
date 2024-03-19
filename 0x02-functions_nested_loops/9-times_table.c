#include "main.h"


/**
 * times_table - print 9 time table from 0 til 9
 *
 * Return: void
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int x = i * j;

			if (x <= 9)
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(x + '0');
			} else
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
		}
		_putchar('\n');

	}
}

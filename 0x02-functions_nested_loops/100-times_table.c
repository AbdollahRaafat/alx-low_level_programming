#include "main.h"
#include <stdio.h>

/**
 * print_times_table - print n time table
 * @n: number of the time talble
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, x;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			x = i * j;

			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (x <= 9)
					_putchar(' ');
				if (x <= 99)
					_putchar(' ');
			}

			if (x <= 9)
			{
				_putchar(x + '0');
			} else if (x <= 99)
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			} else
			{
				_putchar((x / 10 / 10) + '0');
				_putchar(((x / 10) % 10) + '0');
				_putchar(x % 10 + '0');
			}
		}
		_putchar('\n');
	}
}

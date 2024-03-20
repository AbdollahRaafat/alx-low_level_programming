#include "main.h"


/**
 * print_diagonal - draws diagonal line whith
 * @n: the length of line
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		int x = i;

		while (x-- > 0)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}

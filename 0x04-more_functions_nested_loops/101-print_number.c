#include "main.h"

/**
 * print_number - print given number with just _putchar
 * @n: number given
 * Return: void
 */

void print_number(int n)
{
	unsigned long num = n;

	if (n < 0)
	{
		num = -num;
		_putchar('-');
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar(num % 10 + '0');
}

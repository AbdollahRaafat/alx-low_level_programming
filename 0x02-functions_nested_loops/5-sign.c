#include "main.h"

/**
 * print_sign - check if the number is positive or zero or negative
 * @n:number being passed around
 * Return: 1 if the number greater than zero and -1 and 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}

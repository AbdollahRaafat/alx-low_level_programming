#include "main.h"
#include <stdlib.h>

/**
 *   print_last_digit - retrun the last digit of num
 * @n:number being passed around
 * Return: last digit of int
 */
int print_last_digit(int n)
{
	int last = abs(n % 10);

	_putchar(last + '0');
	return (last);
}

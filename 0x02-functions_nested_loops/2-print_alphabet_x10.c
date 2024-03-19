#include "main.h"

/**
 * print_alphabet_x10 - Print every alphabet letter in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 10;

	while (i--)
	{
		char c = 'a';

		while (c <=  'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}

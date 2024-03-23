#include "main.h"
#include <string.h>

/**
 * print_rev - print str in rev
 * @s: string passed
 * Return: void
 */

void print_rev(char *s)
{
	int n = strlen(s);
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

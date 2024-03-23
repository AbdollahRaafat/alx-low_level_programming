#include "main.h"
#include <string.h>

/**
 * puts_half - print half of str
 * @str: string passed
 * Return: void
 */

void puts_half(char *str)
{
	int i, n = strlen(str);

	for (i = (n + 1) / 2; i < n ; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

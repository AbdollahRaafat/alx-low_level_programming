#include "main.h"
#include <string.h>

/**
 * puts2 - print evry other char of str
 * @str: string passed
 * Return: void
 */

void puts2(char *str)
{
	int i, n = strlen(str);

	for (i = 0 ; i < n ; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

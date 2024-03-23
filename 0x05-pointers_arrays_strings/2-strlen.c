#include "main.h"

/**
 * _strlen - return leng of passed string
 * @s: string passed
 * Return: length of the str.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

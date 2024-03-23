#include "main.h"
#include <string.h>

/**
 * rev_string - rev string
 * @s: string passed
 * Return: void
 */

void rev_string(char *s)
{
	int n = strlen(s);

	int i, j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
		j--;
	}
}

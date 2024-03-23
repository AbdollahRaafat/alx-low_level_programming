#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * _atoi - convert str to int
 * @s: str that will be convert to int
 * Return: converted int
 */

int _atoi(char *s)
{
	int i, j, neg = 0, pos = 0, x = 0, n = strlen(s);


	for (i = 0; i < n; i++)
	{
		if (s[i] == '-')
			neg++;
		else if (s[i] == '+')
			pos++;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			x = (s[i] - '0');

			for (j = i + 1; j < n; j++)
			{
				if (s[j] >= '0' && s[j] <= '9')
				{
					x *= 10;
					x += (s[j] - '0');
				} else
					break;
			}
			break;
		}
	}

	return (neg > pos ? -x : x);
}

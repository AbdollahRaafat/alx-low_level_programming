#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element from the arr
 * @a: array of ints
 * @n: how many element will be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}

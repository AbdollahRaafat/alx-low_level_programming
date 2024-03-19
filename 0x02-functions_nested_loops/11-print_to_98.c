#include "main.h"
#include <stdio.h>


/**
 * print_to_98 - print from n to 98
 * @n: num passed
 * Return: void
 */

void print_to_98(int n)
{
	int a = n;
	int b = n;

	if(n == 98)
	{
		printf("98\n");
		return;
	}

	while (a <= 98)
	{
		printf("%d", a);

		if (a < 98)
		{
			printf(", ");
		}
		a++;
	}

	while (b >= 98)
	{
		printf("%d", b);

		if (b > 98)
		{
			printf(", ");
		}
		b--;
	}
	printf("\n");
}

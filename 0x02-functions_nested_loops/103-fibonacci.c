#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 1;
	int b = 1;
	unsigned long int c;
	int sum = 0;
	int i;

	for (i = 0; b <= 4000000 ; i++)
	{
		if (b % 2 == 0)
			sum += b;

		c = a;
		a = b;
		b += c;
	}
	printf("%d\n", sum);
	return (0);
}

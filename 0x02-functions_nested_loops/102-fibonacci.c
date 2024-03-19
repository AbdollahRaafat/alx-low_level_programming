#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long long int a = 1;
	unsigned long long int b = 1;
	int i;

	for (i = 0; i < 50 ; i++)
	{
		if (b != 1)
			printf(", ");

		printf("%lld", b);

		int c = a;

		a = b;
		b += c;
	}
	printf("\n");
	return (0);
}

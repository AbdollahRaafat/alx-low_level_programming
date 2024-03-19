#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 1;
	unsigned long int c;
	int i;

	for (i = 0; i < 50 ; i++)
	{
		if (b != 1)
			printf(", ");

		printf("%ld", b);

		c = a;
		a = b;
		b += c;
	}
	printf("\n");
	return (0);
}

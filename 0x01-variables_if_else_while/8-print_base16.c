#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar((char)x);
		x++;
	}
	x = 'a';

	while (x <= 'f')
	{
		putchar((char)x);
		x++;
	}

	putchar('\n');

	return (0);
}

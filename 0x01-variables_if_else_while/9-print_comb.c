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
		if (x > '0')
		{
			putchar(',');
			putchar(' ');
		}

		putchar((char)x);
		x++;
	}

	putchar('\n');

	return (0);
}

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
int a = '0';

while (a <= '9')
{
	int b = '0';

	while (b <= '9')
	{
		int c = '0';

		while (c <= '9')
		{
			int d = '0';

			while (d <= '9')
			{
				if ((b < d && a <= c))
				{
					if ((!(a == '0' && b == '0' && c == '0' && d == '1')))
					{
						putchar(',');
						putchar(' ');
					}
					putchar((char)a);
					putchar((char)b);
					putchar(' ');
					putchar((char)c);
					putchar((char)d);
				}
				d++;
			}
			c++;
		}
		b++;
	}
	a++;
}

	putchar('\n');
	return (0);
}

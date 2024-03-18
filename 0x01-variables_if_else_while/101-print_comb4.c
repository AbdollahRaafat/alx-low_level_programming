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
		int y = '0';

		while (y <= '9')
		{
			int q = '0';

			while (q <= '9')
			{
				if (!((x == y || x == q || y == q) || !(x < y && y < q)))
				{
					if (!(x == '0' && y == '1' && q == '2'))
					{
						putchar(',');
						putchar(' ');
					}

					putchar((char)x);
					putchar((char)y);
					putchar((char)q);
				}
				q++;
			}
			y++;
		}
		x++;
	}

	putchar('\n');

	return (0);
}

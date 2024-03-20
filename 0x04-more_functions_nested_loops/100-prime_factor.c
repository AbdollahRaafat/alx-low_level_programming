#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long n = 612852475143;
	long largestPrime = -1;
	long i = 2;

	while (i * i <= n)
	{
		while (n % i == 0)
		{
			largestPrime = i;
			n /= i;
		}
		i++;
	}
	if (n > 1)
		largestPrime = n;
	printf("%ld\n", largestPrime);
	return (0);
}

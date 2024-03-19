#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s[] = "_putchar\n";
	int i;

	for (i = 0; i < (int)sizeof(s) ; i++)
	{
		_putchar(s[i]);
	}
	return (0);
}

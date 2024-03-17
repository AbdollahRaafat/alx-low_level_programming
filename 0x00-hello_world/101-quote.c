#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	const char *c = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t len = strlen(c);
	write(1,c, len);
}

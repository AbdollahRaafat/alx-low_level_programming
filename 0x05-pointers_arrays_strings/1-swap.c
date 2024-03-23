#include "main.h"

/**
 * swap_int - swap two vars by address
 * @a: pointer passed
 * @b: pointer passed
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}

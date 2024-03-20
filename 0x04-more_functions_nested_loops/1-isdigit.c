#include "main.h"

/**
 * _isupper - check if char is upper or not
 * @c: third integer
 * Return: 1 if char upper otherwise 0
 */

int _isupper(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

#include "main.h"

/**
 * _isupper - check if char is upper or not
 * @c: third integer
 * Return: 1 if char upper otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

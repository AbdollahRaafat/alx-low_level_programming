#include "main.h"

/**
 * _isdigit - check if char is digit 0 - 9 or not
 * @c: char passed
 * Return: 1 if digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

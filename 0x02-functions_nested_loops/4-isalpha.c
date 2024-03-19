#include "main.h"


/**
 * _isalpha - check if the char passed is alphabetic or not
 * @c: char to be verified`
 * Return: 1 if the letter is alphabitic otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

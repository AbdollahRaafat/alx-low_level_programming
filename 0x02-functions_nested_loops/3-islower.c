#include "main.h"


/**
 * _islower - check if the letter passed is lowercase or not
 * @c: char to be verified
 * Return: 1 if the letter is lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	return (max(max(a, b), c));
}

/**
 * max - return the largest of 2 numbers
 * @a: first int
 * @b: second int
 * Return: largest number
 */

int max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);

}

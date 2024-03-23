#include "main.h"
#include <stdio.h>


/**
 * _strcpy - print n element from the arr
 * @dest: where the cp of src goes
 * @src: this where i will cp from
 * Return: string or pointer of char
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

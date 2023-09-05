#include "main.h"

/**
 * _memset - this memory set function
 * @s: string param
 * @b: character param
 * @n: an integer
 * Return: a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

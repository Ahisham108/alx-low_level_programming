#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointrr to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: pointet s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int  itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}

	return (s);
}

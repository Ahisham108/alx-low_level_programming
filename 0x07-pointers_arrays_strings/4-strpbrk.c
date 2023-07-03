#include "main.h"

/**
 * strpbrk - search a string of any of set of bytes.
 * @s: string
 * @accept: string to match
 * Return: pointer to the byte
*/

char *_strpbrk(char *s, char *accept)
{
	int itr, jtr;
	char *p;

	itr = 0;
	while (s[itr] != '\0')
	{
		jtr = 0;
		while (accept[jtr] != '\0')
		{
			if (accept[jtr] == s[itr])
			{
				p = &s[itr];
				return (p);
			}
			jtr++;
		}
		jtr++;
	}
	return (0);
}

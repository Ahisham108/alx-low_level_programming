#include "main.h"

/**
 * *_strchr - filles memory with a constant byte
 * @s: pointer to put the constant
 * @n: constant
 * Return: Pointer to s
*/

char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] >= '\0' ; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}
	return ('\0');
}

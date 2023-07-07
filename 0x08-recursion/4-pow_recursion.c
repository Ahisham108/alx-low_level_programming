#include "main.h"

/**
 * _pow_recursion - search a string for any any of a set of bytes
 * @x: base
 * @y: exposant
 * Return: pointer to the byets in s that matches one of the bytes
*/

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

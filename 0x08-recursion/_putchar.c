#include <unistd.h>

/**
 * write the charactar c to stdout
 * @c: the chacactar to print
 *
 * Return: on sucsess 1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

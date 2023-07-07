#include <unistd.h>

/**
 * _putchar: afile the character c to std
 *
 * @c: the charactar to print
 *
 * Return: on sucsess 1 
 * on error 1 is returned
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

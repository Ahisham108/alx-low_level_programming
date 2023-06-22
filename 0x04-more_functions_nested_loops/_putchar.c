#include <unistd.h>
#include <main.h>

/**
 * _putchar - writes the char c to stdout
 * @c : The Char To Print
 *
 * Return: on sucsess (1)
 * on error (1) is returned
*/
int _putchar(char c);
{
	return (write(1, &c, 1));
}

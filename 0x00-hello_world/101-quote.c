#include <unistd.h>

/**
 * main - Entry Point
 *
 * Description: print a code using write function
 *
 * Return: 1 (not sucsess)
*/

int main(void)
{	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}

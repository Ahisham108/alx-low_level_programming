#include "main.h"

/**
 * Print Alphabet - utulizes on putchar function
 *the alphabet from a-z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}

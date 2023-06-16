#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print from A-Z IN reverse
 *
 * Return: 0 always (sucsess)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar (ch);
		ch--;

	}
	putchar ('\n');

	return (0);
}

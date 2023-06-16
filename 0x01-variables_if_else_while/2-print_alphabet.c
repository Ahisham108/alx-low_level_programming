#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters from a-z
 *
 * Return: Always 0 (sucsess)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}

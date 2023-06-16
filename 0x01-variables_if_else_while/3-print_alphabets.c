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
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*print from A-Z*/
	while (CH <= 'Z')
	{
		putchar (CH);
		CH++;
	}
	putchar('\n');
	return (0);
}

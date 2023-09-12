#include <stdio.h>

/**
 *
 * main - entry point
 *
 * Description: print alphabet
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

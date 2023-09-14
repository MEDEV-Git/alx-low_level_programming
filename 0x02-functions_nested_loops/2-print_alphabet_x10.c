#include <unistd.h>
#include "main.h"

/**
 *
 * print_alphabet_x10 - function to print alphabet x10times
 *
 * Description: print x10times lowercase alphabet
 *
 * return: 0 (Success)
 */

int print_alphabet_x10(char ch, int j)
{
	char ch;
	int j;

	for (j =0; j <= 10; j++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
}

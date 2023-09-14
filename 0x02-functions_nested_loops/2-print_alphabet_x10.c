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

int print_alphabet_x10(void)
{
	char c = 'a';
	int j;

	for (j = 0; j <= 10; j++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	}
	_putchar('\n');
}

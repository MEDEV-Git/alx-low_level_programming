#include <unistd.h>
#include "main.h"

/**
* print_alphabet_x10 - function to print alphabet x10times
*
* Description: print x10times lowercase alphabet
*
* Return: 0 (Success)
*/

int print_alphabet_x10(void)
{
	char c;
	int j;

	for (j = 1; j <= 10; j++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
	return (0);
}

#include <unistd.h>
#include "main.h"

/**
* print_alphabet - print lowercase alphabet
*
* Description: print alphabet in lowercase
*
* Return: 0 (Success)
*
*/

int print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	}
	_putchar('\n');
	return (0);

}


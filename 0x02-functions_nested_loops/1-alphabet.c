#include <unistd.h>
#include "main.h"

/**
 *
 * main - entry point
 *
 * Description: print the alphabet in lowercase
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


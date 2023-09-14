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

int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		while (c <= 'z')
		{
			print_alphabet('c');
			c++;
		}
	}
	_putchar('\n');
	return (0);

}


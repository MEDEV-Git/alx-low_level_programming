#include <unistd.h>
#include "main.h"

/**
* print_numbers - print numbers
*
* Description: print numbers from 0 to 9
*
* Return: 0 (Success)
*
*/

int print_numbers(int n);
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

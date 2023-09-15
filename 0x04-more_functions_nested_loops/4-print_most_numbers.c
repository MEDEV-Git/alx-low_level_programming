#include <unistd.h>
#include "main.h"

/**
* print_most_numbers - print numbers from 0 - 9 except 2 and 4
*
* Description: print numbers from 0 to 9 except 2 and 4
*
* Return: 0 (Success)
*/

void print_most_numbers(void)
{
	int n;

	for (n = 48; (n <= 57) && (n != 2 && n != 4); n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}


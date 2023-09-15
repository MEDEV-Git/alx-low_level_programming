#include <unistd.h>
#include "main.h"

/**
* print_square - print # depending on input n
*
* @size: input
*
* Description: print #
*
* Return: 0 Success;
*/

void print_square(int size);
{
	int lenchr;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lenchr = 1; lenchr <= n; lenchr++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	
}

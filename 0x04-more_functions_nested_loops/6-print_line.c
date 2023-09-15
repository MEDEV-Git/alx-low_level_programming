#include <unistd.h>
#include "main.h"

/**
* print_line - print _ depending on input n
*
* @n: input
*
* Description: print _ lign
*
* Return: 0 Success;
*/

void print_line(int n)
{
	int lenchr;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lenchr = 1; lenchr <= n; lenchr++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	
}

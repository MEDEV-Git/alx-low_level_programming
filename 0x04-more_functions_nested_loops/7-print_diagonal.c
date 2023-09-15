#include <unistd.h>
#include "main.h"

/**
* print_diagonal - print _ depending on input n
*
* @n: input
*
* Description: print \ diagonal
*
* Return: 0 Success;
*/

void print_diagonal(int n)
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
			_putchar(92);
		}
		_putchar('\n');
	}
	
}

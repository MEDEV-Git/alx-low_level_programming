#include <unistd.h>
#include "main.h"

/**
* more_numbers - function to print numbers from 0 to 14 x10times
*
* Description: print from 0 to 14 x10times
*
* Return: 0 (Success)
*/

void more_numbers(void)
{
	int n;
	int j;

	for (j = 1; j <= 10; j++)
	{
		n = 0;
		while (n <= 14)
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
	}
	return (0);
}

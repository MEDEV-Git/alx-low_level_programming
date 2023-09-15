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

int print_numbers(void);
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		while (n <= '9')
		{
			_putchar(n);
			n++;
		}
	}
	_putchar('\n');
	return (0);

}

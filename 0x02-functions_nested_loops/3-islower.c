#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - function to check lowercase
 *
 * Description: check if a charachter is lowercase
 *
 * Return: 1 Succes
 */

int _islower(int c)
{
	int c;
	c = _islower('H');
	_putchar(c + '0');
	c = _islower('o');
	_putchar(c + '0');
	c = _islower(108);
	_putchar(c + '0');
	_putchar('\n');
	return (0);
}

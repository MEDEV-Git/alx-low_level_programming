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
	char c;
	if islower(c)
	{
		_putchar(c);
	}
}

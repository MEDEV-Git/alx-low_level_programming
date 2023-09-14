#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
* _islower - function to check lowercase
*
* @c: The character to check
*
* Description: check if a charachter is lowercase
*
* Return: 1 if c is lowercase, 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
* _isupper - function to check uppercase
*
* @c: The character to check
*
* Description: check if a charachter is uppercase
*
* Return: 1 if c is uppercase, 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

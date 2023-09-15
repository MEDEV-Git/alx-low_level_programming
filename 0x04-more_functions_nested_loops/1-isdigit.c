#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
* _isdigit - function to check for digit
*
* @c: The character to check
*
* Description: check if c is digit
*
* Return: 1 if c is digit, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

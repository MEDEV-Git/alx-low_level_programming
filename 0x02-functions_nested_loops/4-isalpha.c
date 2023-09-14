#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
* _isalpha - function to check lowercase
*
* @c: The character to check
*
* Description: check if a charachter is alphabetic
*
* Return: 1 if c is alphabetic, 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'a') && (c <= 'z') || (c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
* _isdigit - function to check for digit between 0 - 9
*
* @c: The input digit
*
* Return: 1 if c is digit, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

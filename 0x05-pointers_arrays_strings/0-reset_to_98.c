#include "main.h"

/**
 *
 * reset_to_98(int *n): function of pointer
 *
 * Description: function that create pointers then change the value
 *
 * Return: always 0
 *
 */

void reset_to_98(int *n)
{
	int n;
	int *pointer = &n;

	*pointer = 98;
}

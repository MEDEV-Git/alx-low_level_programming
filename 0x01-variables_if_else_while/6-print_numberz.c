#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabet in lowercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int numberz = 0;

	while (numberz <= 9)
	{
		putchar(numberz + '0');
		numberz += 1;
	}
	putchar('\n');
	return (0);

}


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
	char letter;
	char upper;

	for (((letter = 'a'; letter <= 'z')&&(upper = 'A'; upper <= 'Z')); letter++)
	{
		putchar(letter);
		putchar(upper);
	}
	putchar('\n');
	return (0);

}

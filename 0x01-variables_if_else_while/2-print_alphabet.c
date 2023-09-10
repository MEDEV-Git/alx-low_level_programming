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

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }

    putchar('\n');  // Print a newline character to end the line
    return (0);

}


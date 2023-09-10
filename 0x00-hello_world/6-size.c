#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the sizes using sizeof
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int ch = sizeof(char);

    printf("Size of a char: %d byte(s)\n", ch);

    int n = sizeof(int);

    printf("Size of an int: %d byte(s)\n", n);

    long lint = sizeof(long);

    printf("Size of a long int: %ld byte(s)\n", lint);

    long long llint = sizeof(long long);

    printf("Size of a long long int: %lld byte(s)\n", llint);

    float f = sizeof(float);

    printf("Size of a float: %g byte(s)\n", f);

    return (0);
}

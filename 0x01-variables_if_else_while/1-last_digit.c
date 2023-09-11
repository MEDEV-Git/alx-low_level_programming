#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: Find the last digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int n;
    char nStr[30];
    int length;
    int index;
    int absoluteN;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    /* Calculate the absolute value of n */
    absoluteN = abs(n);

    /* Convert absoluteN to a string */
    sprintf(nStr, "%d", absoluteN);

    /* Calculate the length of the string */
    length = strlen(nStr);

    /* Calculate the index of the last character */
    index = length - 1;

    if (nStr[index] > '5')
    {
        printf("Last digit of %d is %c and is greater than 5\n", n, nStr[index]);
    }
    else if (nStr[index] < '6' && nStr[index] != '0')
    {
        printf("Last digit of %d is %c and is less than 6 and not 0\n", n, nStr[index]);
    }
    else if (nStr[index] == '0')
    {
        printf("Last digit of %d is %c and is 0\n", n, nStr[index]);
    }

    return (0);
}

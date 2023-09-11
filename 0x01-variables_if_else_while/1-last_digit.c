#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h> // Include the <string.h> header

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
    
    srand(time(0));
    n = rand() - RAND_MAX / 2;

    int absoluteN = abs(n);
    char nStr[30];
    sprintf(nStr, "%d", absoluteN);

    char lastDigit = nStr[strlen(nStr) - 1];

    printf("Last digit of %d is %c", n, n < 0 ? '-' : ' ');

    if (lastDigit > '5')
    {
        printf("%c and is greater than 5\n", lastDigit);
    }
    else if (lastDigit < '6' && lastDigit != '0')
    {
        printf("%c and is less than 6 and not 0\n", lastDigit);
    }
    else if (lastDigit == '0')
    {
        printf("%c and is 0\n", lastDigit);
    }

    return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 *
 * Description: find last digit
 *
 * Return: 0 (Success)
 */

int main(void)
{
    int n;
    char nStr[30];

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    
    sprintf(nStr, "%d", n);
    
    int length = strlen(nStr);
    int index = length - 1;

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


#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    
    char nStr[30];
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

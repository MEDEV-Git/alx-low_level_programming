#include <unistd.h>
#include "main.h"
/**
* main - entry code
*
*Description: print _putchar
*
* Return: 1 (Success)
*/

int _putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int main(void) 
{
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');

    return (0);
}


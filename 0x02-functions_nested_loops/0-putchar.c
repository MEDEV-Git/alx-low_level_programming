#include <unistd.h>
#include "main.h"  // Include the header file

int _putchar(char c) {
    // Write 'c' to standard output
    write(1, &c, 1);
    return (1);
}

int main(void) {
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');  // Print a newline character

    return (0);
}


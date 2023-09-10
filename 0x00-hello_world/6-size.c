#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print the sizeof
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int ch= sizeof(char);
	printf("Size of a char: %c byte(s)\n", ch);
	int n= sizeof(int);
        printf("Size of a int: %d byte(s)\n", n);
	int lint= sizeof(long);
        printf("Size of a long int: %ld byte(s)\n", lint);
	int llint= sizeof(int);
        printf("Size of a long long int: %lld byte(s)\n", llint);
	int f= sizeof(float);
        printf("Size of a floqt: %f byte(s)\n", f);
	
	return (0);


}

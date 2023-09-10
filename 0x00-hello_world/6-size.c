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
	printf("Size of a char: %c\n", ch);
	int n= sizeof(int);
        printf("Size of a int: %d\n", n);
	int lint= sizeof(long);
        printf("Size of a long int: %ld\n", lint);
	int llint= sizeof(int);
        printf("Size of a long long int: %lld\n", llint);
	int f= sizeof(char);
        printf("Size of a floqt: %f\n", f);
	
	return (0);


}

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
	int ch= siseof(char);
	printf("Size of a char: %c\n", ch);
	int n= siseof(int);
        printf("Size of a int: %d\n", n);
	int lint= siseof(long);
        printf("Size of a long int: %ld\n", lint);
	int llint= siseof(int);
        printf("Size of a long long int: %lld\n", llint);
	int f= siseof(char);
        printf("Size of a floqt: %f\n", f);
	
	return (0);


}

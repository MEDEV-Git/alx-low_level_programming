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
	char ch= sizeof(ch);
	printf("Size of a char: %d byte(s)\n", ch);
	int n= sizeof(n);
        printf("Size of a int: %d byte(s)\n", n);
	int lint= sizeof(lint);
        printf("Size of a long int: %ld byte(s)\n", lint);
	int llint= sizeof(llint);
        printf("Size of a long long int: %lld byte(s)\n", llint);
	int f= sizeof(f);
        printf("Size of a float: %f byte(s)\n", f);
	
	return (0);


}

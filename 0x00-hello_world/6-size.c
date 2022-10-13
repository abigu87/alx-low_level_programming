#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of the a char: %d byte(s)\n" sizeof(a));
	printf("size of the a int: %d byte(s)\n" sizeof(b));
	printf("size of the a long int: %d byte(s)\n" sizeof(c));
	printf("size of the a long long int: %d byte(s)\n" sizeof(d));
	printf("size of the a float: %d byte(s)\n" sizeof(e));
	return (0);
}

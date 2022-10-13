#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of the a char: %d byte(s)\n", sizeof(char));
	printf("size of the an int: %d byte(s)\n", sizeof(int));
	printf("size of the a long int: %d byte(s)\n", sizeof(long int));
	printf("size of the a long long int: %d byte(s)\n", sizeof(long long int));
	printf("size of the a float: %d byte(s)\n", sizeof(float));
	return (0);
}

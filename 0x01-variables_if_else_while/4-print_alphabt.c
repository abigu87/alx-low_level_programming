#include <stdio.h>

/*
 * main - Prints the alphabet in lowercase
 * Return: 0
 */
int main(letter)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');

	return (0);
}

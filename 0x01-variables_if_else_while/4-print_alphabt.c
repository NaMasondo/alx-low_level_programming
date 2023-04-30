#include <stdio.h>

/**
 * main - "Prints alphabet in lowercase followed by new line"
 *
 * Return: Always 0.
 */
int main(void)
{
	char x = 'a';

	do (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (x != 'e' && x != 'q');

	putchar('\n');
	return (0);
}

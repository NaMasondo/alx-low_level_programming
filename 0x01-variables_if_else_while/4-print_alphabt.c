#include <stdio.h>

/**
 * main - "Prints alphabet in lowercase followed by new line"
 *
 * Return: Always 0.
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z' && x != 'q' && x != 'e')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}

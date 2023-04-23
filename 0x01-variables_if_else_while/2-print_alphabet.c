#include <stdio.h>

/**
 * main - "prints alphabet in lowercase followed by new line"
 *
 * Return: Always 0.
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}

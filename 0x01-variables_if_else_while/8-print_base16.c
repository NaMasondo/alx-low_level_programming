#include <stdio.h>

/**
 * main - "Prints all numbers of base 16"
 *
 * Return: Always 0.
 */
int main(void)
{
	char x = '0';
	char y = 'a';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	while (y <= 'f')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - "Prints all possible combinations of single digit numbers"
 *
 * Return: Always 0.
 */
int main(void)
{
	int x = 48;
	int y = 44;
	int z = 32;

	while (x <= 59 && x != 58)
	{
		putchar(x);
		putchar(y);
		putchar(z);
		x++;
	}
	putchar('\n');
	return (0);
}

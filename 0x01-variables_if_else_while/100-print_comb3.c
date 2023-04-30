#include <stdio.h>

/**
 * main - "Prints two digit combinations"
 *
 * Return: Always 0.
 */
int main(void)
{
	int x = 48;
	int y = 48;
	int z = 32;
	int w = 44;

	while (x <= 57)
	{
		putchar(x);
		x++;
		for (y = 48; y <= 57; y++)
		{
			putchar(y);
			putchar(w);
			putchar(z);
		}
	}
	putchar('\n');
	return (0);
}

#include "main.h"
/**
 * print_alphabet_x10 - "prints the alphabet 10 times"
 */

void print_alphabet_x10(void)
{
	int y = 0;
	char x;

	while (y < 10)
	{
		x = 'a';
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		y++;
	}
}

#include <stdio.h>
#include "main.h"
/**
 * main - "prints the alphabet in lowercase"
 *
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}

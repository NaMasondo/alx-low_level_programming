#include "main.h"
/**
 * print_line - "draws a straight line"
 * @n: variable that indicates the number of times _ is printed.
 */
void print_line(int n)
{
	int len = '_';

	for (len = 0; len == n; len++)
	{
		if (n > 0)
		{
			_putchar('_');
			_putchar('\n');
		}
	}
	_putchar('\n');
}

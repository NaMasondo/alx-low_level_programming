#include "main.h"
/**
 * print_numbers - "function that prints numbers from 0 to 9"
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int x = '0';

	while (x <= '9')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}

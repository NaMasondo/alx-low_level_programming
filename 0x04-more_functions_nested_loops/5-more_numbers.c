#include "main.h"
/**
 * more_numbers - "prints numbers from 0 to 14 ten times"
 */
void more_numbers(void)
{
	int n;

	for (n = '0'; n <= '9' + '5'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a string and new line
 * @s: variable points to string
 */
void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

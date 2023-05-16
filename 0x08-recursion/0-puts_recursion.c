#include "main.h"
/**
 * _puts_recursion - prints a  string
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	char s[] = "Puts with recursion"
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

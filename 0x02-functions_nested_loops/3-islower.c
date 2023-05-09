#include "main.h"
/**
 * _islower - "checks for lowercase character"
 *
 * @c: variable
 *
 * Return: 1 If "c" is lowercase and 0 otherwise.
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

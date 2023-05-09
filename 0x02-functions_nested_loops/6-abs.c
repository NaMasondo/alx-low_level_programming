#include "main.h"
/**
 * _abs - computes absolute value of integer
 * @r: integer
 * Return: absolute value of integer
 */
int _abs(int r)
{

	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (-r);
	}
	_putchar('\n');
	return (0);
}

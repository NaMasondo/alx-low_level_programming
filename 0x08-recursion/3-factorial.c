#include <stdio.h>
#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: number in which its factorial will be determined
 * Return: -1 if n < 0 or if n == 0 return 1 or (n * factorial(n - 1))
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

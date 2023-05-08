#include "main.h"
/**
 * swap_int - "swaps values of variables a and b"
 * @a: Variable to be swapped from 98 to 42
 * @b: Variable to be swapped from 42 to 98
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}

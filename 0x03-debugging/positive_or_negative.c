#include "main.h"
/**
 * positive_or_negative(int i) - "to test for positive or negative function"
 * @i: variable to be tested
 */

void positive_or_negative(int i)
{
	 if (i > 0)
        {
                printf("%d is positive\n", i);
        }
        else if (i == 0)
        {
                printf("%d is zero\n", i);
        }
        else if (i < 0)
        {
                printf("%d is negative\n", i);
        }
}

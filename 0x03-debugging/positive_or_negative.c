#include <stdio.h>
/**
 * positive_or_negative - fun check i is positive or not or zero
 *
 * @i: input the function
 * Retirn: print is positive if that true and so on
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}

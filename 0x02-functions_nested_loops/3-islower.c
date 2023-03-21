#include "main.h"
/**
 * _islower - checking is lower aphabrtic or no
 *
 * Return 1 if is lower and return 0 if it's not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"
/**
 * _isupper - fun check char is upper or not
 *
 * @c: input char for fun
 * Return: return 1 if c is upper or 0 if c is letter
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

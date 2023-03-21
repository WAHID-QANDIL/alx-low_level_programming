#include "main.h"
/**
 * _isalpha - check character is aphabetic or not
 *
 * @c parameter to check
 * Return: return 1 if c is alphabetic
 * return 0 if c is not alphabetic
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

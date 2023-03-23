#include "main.h"
/**
 * _isdigit - fun check if c is number or not
 *
 * @c: input number function
 * Return: return 1 if c is number or 0 if c is not number
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

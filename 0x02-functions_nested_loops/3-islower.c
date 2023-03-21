#include "main.h"
/**
 * _islower - check if lower alphaberic or not
 *
 * @c: is the parameter of fun islower
 * Return: 1 if is return 0 if is not
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

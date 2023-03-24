#include "main.h"
/**
 * print_line - print line of _
 *
 * @n: n is the lenth of line
 * Return: just print _ of n
 */

void print_line(int n)
{
	int i = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for ( ; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

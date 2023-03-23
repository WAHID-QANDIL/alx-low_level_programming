#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: print numbers from 0 to 9
 */

void print_numbers(void)
{
	int i;

	for(i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

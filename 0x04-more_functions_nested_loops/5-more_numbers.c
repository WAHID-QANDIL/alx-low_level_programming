#include "main.h"
/**
 * more_numbers - print number from 0 to 14 10 times
 *
 * Return: just print numbers no return value
 */

void more_numbers(void)
{
	int i;
	int a;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}

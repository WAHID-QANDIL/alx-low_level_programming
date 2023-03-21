#include "main.h"
/**
 * print_alphabet_x10 - print alphabet x10
 *
 * Return always 0.
 */
void print_alphabet_x10(void)
{

	int counter;
	char i;

	for (counter = 0; counter < 10; counter++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

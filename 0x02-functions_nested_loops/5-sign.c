#include"main.h"
/**
 * print_sign - print + if n > 0
 * @n:parameter for input function
 * Return: return 1 if n > 0 and 0 if n == 0 and -1 if n < 0
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}

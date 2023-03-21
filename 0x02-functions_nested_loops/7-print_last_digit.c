#include"main.h"
#include<stdio.h>
/**
 * print_last_digit - print alst digit of n
 *
 * @n: n is input for this function
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		i = i * -1;
	}
	_putchar(i + '0');
	return (i);
}

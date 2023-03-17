#include<stdio.h>
/**
 * main - start from here
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 97;

	for (int i = n; i <= 122; i++)
	{
		putchar(n);
		n++;
	}
	n = 65;
	while (n <= 90)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

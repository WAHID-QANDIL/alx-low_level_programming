#include<stdio.h>
/**
 * main - starting from here
 *
 * Return: 0 (Success)
 */
int main(void)
{
        int n = 48;

        while (n <= 57)
        {
                putchar(n);
		putchar(',');
		putchar(' ');
                n++;
        }
        putchar('\n');
        return (0);
}   

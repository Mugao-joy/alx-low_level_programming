#include "main.h"
/**
 * print_sign - prints sign of a character
 * @n: character to be tested
 * Return: 1 if positive zero  or -1 if negative
 */
int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		_putchar('0');
	}
	else
	{
		test = -1;
		_putchar('-');
	}
	return (test);
}

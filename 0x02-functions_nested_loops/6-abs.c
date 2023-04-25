#include "main.h"
/**
 * _abs - absolute value of an integer
 * @n: number to be checked
 * Return: n which is the absolute value
 */
int _abs(int n)
{
	if (n > 0)
		return (n);

	else
	{
		n *= -1;
		return (n);
	}
}

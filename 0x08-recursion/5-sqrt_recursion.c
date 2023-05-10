#include "main.h"
#include <math.h>
#include <stdio.h>
/**
 * _sqrt_recursion - returns natual square root of x
 * @n: integer to be squared
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if ((n * n) < 0)
		return (-1);
	if ((n * n) > 0)
		return (1);
	return (_sqrt_recursion(n * n));
}

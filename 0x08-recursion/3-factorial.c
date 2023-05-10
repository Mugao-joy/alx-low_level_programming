#include "main.h"
#include <stdio.h>
/**
 * factorial - function to print factorial
 * @n: integer to be factored
 * Return: -1 if n < 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

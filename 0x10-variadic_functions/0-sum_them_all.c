#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters passed
 * @...: variable standard for va_functions
 * Return: sum or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int a, sum = 0;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
	int x = va_arg(args, int);
sum += x;
	}
	va_end(args);
	return (sum);
}

#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int flips = n ^ m;
	unsigned long int rep;

	for (a = 63; a >= 0; a--)
	{
		rep = flips >> a;
		if (rep & 1)
			count++;
	}

	return (count);
}

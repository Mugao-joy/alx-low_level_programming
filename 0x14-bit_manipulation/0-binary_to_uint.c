#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int binari = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		binari = 2 * binari + (b[a] - '0');
	}

	return (binari);
}

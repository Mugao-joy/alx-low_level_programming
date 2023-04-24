#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n,m;

	for (n = 23; n <= 36; n++)
	{
		for (m = 31; m <= 43; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 36 || m != 43)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

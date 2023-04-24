#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	int m;

	for (n = 23; n <= 86; n++)
	{
		for (m = 31; m <= 43; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 86 && m != 43)
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

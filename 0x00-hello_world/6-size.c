#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("size of  a int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
	printf("size of char: %lu byte(s) \n", (unsigned long)sizeof(char));
	printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}

#include "FUNCTION_POINTERS_H"
#include <unistd.h>
/**
 * _putchar - function to print one character at a time
 * @c: value of character
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"
#include <unistd.h>
/**
 * _putchar - function to print one character at a time
 * @c: variable
 *
 * Return: 0 always
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

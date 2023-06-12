#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints one character at a time
 * @c: character to be printed
 *
 * Return: 0 always
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"
#include <unistdio.h>
/**
 * _putchar - prints one character
 * @c: value character
 *
 * Return: always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

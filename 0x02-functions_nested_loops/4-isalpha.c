#include "main.h"
/**
 * _isalpha - checks for alphabets
 * @c: character to be checked
 * Return: 1 if alphabet or 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}

#include"main.h"
/**
 * _strlen_recursion - returns lengh of string in recursion
 * @s: string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int string = 0;

	if (*s)
	{
		string++;
		string += _strlen_recursion(s + 1);
	}
	return (string);
}

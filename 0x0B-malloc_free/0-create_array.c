#include "main.h"
#include <stdlib.h>
/**
 * create_array - function to create an array of size
 * @size: size of an array
 * @c: character
 * Return: Null if size is zero or fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}



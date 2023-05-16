#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: a string character
 *
 * Return: NULL if NULL or insufficient memory
 */
char *_strdup(char *str)
{
	char *babe;
	int a, b = 0;

	if (str == NULL)
		return (NULL);

	a = 0;
	while (str[a] != '\0')
		a++;

	babe = malloc(sizeof(char) * (a + 1));

	if (babe == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		babe[b] = str[b];

	return (babe);
}


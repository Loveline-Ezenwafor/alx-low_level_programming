#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ccc;
	int t, r = 0;

	if (str == NULL)
		return (NULL);
	t = 0;
	while (str[t] != '\0')
		t++;

	ccc = malloc(sizeof(char) * (t + 1));

	if (ccc == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		ccc[r] = str[r];

	return (ccc);
}

#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @p: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *p)
{
	int longit = 0;

	if (*p)
	{
		longit++;
		longit += _strlen_recursion(p + 1);
	}

	return (longit);
}

#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @t: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char t)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == t)
			return (&s[i]);
	}
	return (0);
}

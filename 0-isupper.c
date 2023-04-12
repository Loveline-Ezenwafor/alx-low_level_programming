#include "main.h"

/**
 * _isupper - uppercase letters
 * @w: char to check
 *
 * Return: 0 or 1
 */
int _isupper(int w)
{
	if (w >= 'A' && w <= 'Z')
		return (1);
	else
		return (0);
}

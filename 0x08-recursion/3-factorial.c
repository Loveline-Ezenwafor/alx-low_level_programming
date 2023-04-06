#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @t: number to return the factorial form
 *
 * Return: factorial of t
 */
int factorial(int t)
{
	if (t < 0)
		return (-1);
	if (t == 0)
		return (1);
	return (t * factorial(t - 1));
}

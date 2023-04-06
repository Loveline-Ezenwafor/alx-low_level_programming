#include "main.h"

int actual_sqrt_recursion(int a, int b);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @c: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int c)
{
	if (c < 0)
		return (-1);
	return (actual_sqrt_recursion(c, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @c: number to calculate the sqaure root of
 * @b: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int c, int b)
{
	if (b * b > c)
		return (-1);
	if (b * b == c)
		return (b);
	return (actual_sqrt_recursion(c, b + 1));
}

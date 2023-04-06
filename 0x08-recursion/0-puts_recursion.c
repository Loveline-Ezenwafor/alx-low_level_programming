#include "main.h"

/**
 * _puts_recursion - function like puts();
 * @l: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *l)
{
	if (*l)
	{
		_putchar(*l);
		_puts_recursion(l + 1);
	}

	else
		_putchar('\n');
}

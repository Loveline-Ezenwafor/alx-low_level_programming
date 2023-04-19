#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @p: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*p)(char *))
{
	if (name == NULL || p == NULL)
		return;

	p(name);
}


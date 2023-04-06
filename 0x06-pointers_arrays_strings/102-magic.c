#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a[5];
	int *p;

	a[2] = 1024;
	p = &a[2];

	/* write your line of code here */
	(*p) = 98;
	/* Don't touch the code below */
	printf("a[2] = %d\n", a[2]);
	return (0);
}

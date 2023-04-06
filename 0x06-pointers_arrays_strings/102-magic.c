#include <stdio.h>

/**
 * main - prints the value of the third element
 * of the array "a"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a[5] = {98, 402, 198, 1024, 307};
	int *p;

	p = a;

	/* your code goes here */

	printf("a[2] = %d\n", *(p + 2));

	return (0);
}

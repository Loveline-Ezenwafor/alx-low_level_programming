#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @lc: int input
 * @lv: double pointer array
 * Return: 0
 */
char *argstostr(int lc, char **lv)
{
	int i, n, r = 0, l = 0;
	char *str;

	if (lc == 0 || lv == NULL)
		return (NULL);

	for (i = 0; i < lc; i++)
	{
		for (n = 0; lv[i][n]; n++)
			l++;
	}
	l += lc;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < lc; i++)
	{
	for (n = 0; lv[i][n]; n++)
	{
		str[r] = lv[i][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}

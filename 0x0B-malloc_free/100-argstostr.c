#include "main.h"

/**
 *argstostr - concatenates all the arguments of your program
 *@ac: input
 *@av: input
 *Return: 0 if successful
 */

char *argstostr(int ac, char **av)
{
	int i, n, j = 0, m = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			m++;
	}
	m += ac;
	str = malloc(sizeof(char) * m + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[j] = av[i][n];
			j++;
		}
		if (str[j] == '\0')
		{
			str[j++] = '\n';
		}
	}
	return (str);
}

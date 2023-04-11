#include "main.h"

/**
 *_strdup - function that returns a pointer to a newly allocated
 *space memory, which contains a copy of the string given as a parameter
 *@str: input
 *Return: 0 if successful
 */

char *_strdup(char *str)
{
	char *c;
	int i, n = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	c = malloc(sizeof(char) * (i + 1));
	if (c == NULL)
		return (NULL);
	for (n = 0; str[n]; n++)
		c[n] = str[n];
	return (c);
}

#include "main.h"

/**
 *str_concat - concatenates two strings
 *@s1: input 1
 *@s2: input 2
 *Return: 0 if successful
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	conct = malloc(sizeof(char) * (i + j + 1));
	if (conct == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		conct[i] = s2[j];
		i++, j++;
	}
	conct[i] = '\0';
	return (conct);
}

#include "main.h"
/**
 *count_words - function that counts words in string
 *@s: input
 *Return: no of words
 */

int count_words(char *s)
{
	int n = 0;
	int m = 0;
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == ' ')
			n = 0;
		else if (n == 0)
		{
			n = 1;
			m++;
		}
	}
	return (m);
}

/**
 *strtow - function that splits a string into words
 *@str: input
 *
 *Return: nothing
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, w, j = 0, s, e;

	while (*(str + len))
		len++;
	w = count_words(str);
	if (w == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (w + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				e = i;
				tmp = (char *) malloc(sizeof(char) * (j + 1));
				if (tmp == NULL)
					return (NULL);
				while (s < e)
					*tmp++ = str[s++];
				*tmp = '\0';
				matrix[k] = tmp - j;
				k++;
				j = 0;
			}
		}
		else if (j++ == 0)
			s = i;
	}
	matrix[k] = NULL;
	return (matrix);
}

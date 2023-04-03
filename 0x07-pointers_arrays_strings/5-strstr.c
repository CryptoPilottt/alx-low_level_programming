#include "main.h"

/**
 *_strstr - function that locates a substring
 *@haystack: input
 *@needle: input
 *Return: 0 if successful
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *n = needle;

		while (*i == *n && *n != '\0')
		{
			i++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (NULL);
}

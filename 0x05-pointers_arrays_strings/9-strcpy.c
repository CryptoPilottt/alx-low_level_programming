#include "main.h"
#include <stdio.h>

/**
 *_strcpy - copies string
 *@dest: destination array
 *@src: source array
 *Return: copies string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		i++;
	}
	for ( ; x < i ; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}

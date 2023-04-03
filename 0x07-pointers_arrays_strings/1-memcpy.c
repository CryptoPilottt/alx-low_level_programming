#include "main.h"

/**
 *_memcpy - Write a function that copies memory area
 *@dest: destination memory area
 *@src: source memory area
 *@n: number of bytes to be copied
 *Return: result
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}

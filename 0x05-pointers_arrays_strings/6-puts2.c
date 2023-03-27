#include "main.h"
#include <stdio.h>

/**
 *puts2 - prints every other character
 *@str: variable to be printed
 *Return: 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
 *_puts - prints a string to stdout
 *@str: function parameter
 *Return: 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		putchar(str[i]);
	putchar('\n');
}

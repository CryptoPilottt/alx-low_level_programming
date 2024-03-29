#include "main.h"

/**
 *_puts_recursion - function that prints a string
 *@s: input
 *Return: 0 if successful
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}

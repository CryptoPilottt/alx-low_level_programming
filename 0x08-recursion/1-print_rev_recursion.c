#include "main.h"

/**
 *_print_rev_recursion - prints string in reverse
 *@s: input
 *Return: 0 if successful
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}

#include "main.h"
#include <stdio.h>

/**
 *print_numbers - prints 0 to 9
 *Return: the integer
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
}

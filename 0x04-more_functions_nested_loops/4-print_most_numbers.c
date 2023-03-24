#include "main.h"
#include <stdio.h>

/**
 *print_most_numbers - print 0 to 9 except 2 and 4
 *
 *Return: result
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		putchar(x + '0');
	}
	putchar('\n');
}


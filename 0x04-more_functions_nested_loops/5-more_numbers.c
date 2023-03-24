#include "main.h"
#include <stdio.h>

/**
 *more_numbers - prints 10x the numbers 0 to 14
 *
 *Return: result
 */

void more_numbers(void)
{
	int x, y;

	for (x = 1; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			putchar(y + '0');
		}
		putchar('\n');
	}
}

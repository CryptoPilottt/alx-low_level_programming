#include "main.h"

/**
 * print_alphabet - print lowercase alphabet
 *
 * Return: 0 if successful
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}


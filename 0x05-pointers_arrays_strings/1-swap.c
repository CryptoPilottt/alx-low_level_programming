#include "main.h"

/**
 *swap_int - swap value of two integers
 *@a: int to be swapped with b
 *@b: int to be swapped with a
 *Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

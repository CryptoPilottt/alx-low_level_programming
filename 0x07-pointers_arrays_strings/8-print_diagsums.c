#include "main.h"

/**
 *print_diagsums - prints sum of 2 diagonals of a square matrix of integers
 *@a: input
 *@size: input
 *Return: 0 if successful
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, i;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}

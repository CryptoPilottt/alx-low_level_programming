#include "variadic_functions.h"
#include <stdarg.h>

/**
 *print_numbers - prints number\n
 *@separator: string to be printed btwn no
 *@n: no of integers passed to the function
 *@...: variable no of numbers to be printed
 *Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int index;

	va_start(num, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(num, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(num);
}

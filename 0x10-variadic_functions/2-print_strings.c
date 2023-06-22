#include "variadic_functions.h"
#include <stdarg.h>

/**
 *print_strings - prints strings\n
 *@separator: string to be printed btwn strings
 *@n: no of strings passed to the function
 *@...: variable no of strings to be printed
 *Desription: if separator is null, it's not printed. if one
 *string is null, (nil) is printed
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}

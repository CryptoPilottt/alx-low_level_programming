#include "main.h"

/**
 *_isupper - function that checks for uppercase character
 * @c: function to be checked
 * Return: 1 if function is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

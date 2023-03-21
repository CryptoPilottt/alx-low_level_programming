#include "main.h"

/**
 *_isalpha - checks for lower or upper case character
 *@c: the character to be checked
 *Return: 1 if character is lowercase or uppercase 0 if anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

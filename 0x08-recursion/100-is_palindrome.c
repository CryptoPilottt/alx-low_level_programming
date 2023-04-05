#include "main.h"

int check_palindrome(char *s, int i, int len);
int strlen_recursion(char *s);

/**
 *is_palindrome - checks if atring is palindrome
 *@s: input
 *Return: 1 if it is, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, strlen_recursion(s)));
}

/**
 *strlen_recursion - returns length of a string
 *@s: input
 *Return: length of a string
 */

int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlen_recursion(s + 1));
}

/**
 *check_palindrome - checks character recursively for palindrome
 *@s: string to check
 *@i: iterator
 *@len: length of string
 *Return: 1 if palindrome, 0 otherwise
 */

int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palindrome(s, i + 1, len - 1));
}

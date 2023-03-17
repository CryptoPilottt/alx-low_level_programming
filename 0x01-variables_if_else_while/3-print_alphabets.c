#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 if successful
 */

int main(void)
{
	char i;
	char h;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (h = 'A' ; h <= 'Z' ; h++)
		putchar(h);
	putchar('\n');

	return (0);
}

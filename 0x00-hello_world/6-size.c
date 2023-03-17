#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 if successful
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(a));
	printf("Size of an int: %ld byte(s)\n", sizeof(b));
	printf("Size of a long int: %ld byte(s)\n", sizeof(c));
	printf("Size of long long int: %ld byte(s)\n", sizeof(d));
	fprint(stderr, "Size of long long int: %ld byte(s)\n", sizeof(d));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}

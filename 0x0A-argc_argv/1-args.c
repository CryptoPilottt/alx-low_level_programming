#include "main.h"

/**
 *main - program that prints the no of arguments passed into it
 *@argc: no of agruments
 *@argv: array of arguments
 *Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/

	printf("%d\n", argc - 1);

	return (0);
}

#include "main.h"

/**
 *main - prints all arguments
 *@argc: no of arguments
 *@argv: array of arguments
 *Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

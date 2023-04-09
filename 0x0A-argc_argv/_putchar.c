#include <stdio.h>
#include "main.h"

/**
 *putchar - writescharacter i to stdiout
 *@c: character output
 *Return: 1 if successful, -1 on error and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

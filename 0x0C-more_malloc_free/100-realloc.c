#include "main.h"

/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: pointer to memory previously allocated by malloc
 *@old_size: size of allocated memory in ptr
 *@new_size: new size of new memory block
 *Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char p1, p2;
	unsigned int i;

	if (ptr != NULL)
		p1 = ptr;
	else
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	p2 = malloc(new_size);
	if (p2 == NULL)
		return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(p2 + 1) = p1[i];
	}
	free(ptr);
	return (p2);
}

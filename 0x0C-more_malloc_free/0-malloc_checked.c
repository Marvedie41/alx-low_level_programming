#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes to allocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	ptr = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
}

#include "main.h"

/**
 * malloc_checked - allocates memory using
 * @b: mery size in byte
 *
 * Return; pointer or NULL
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	else
	{
		return (ptr);
	}
}

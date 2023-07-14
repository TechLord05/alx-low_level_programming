#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: the number of bytes
 * Return: ptr if success
 */

void *malloc_checked(unsigned int b)
{
	void *pr;
	
	pr = malloc(b);
	if (pr == NULL)
		exit(98);
	return (pr);
}

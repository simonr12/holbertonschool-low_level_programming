#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - alloc memory for an array and init it to zero
 *
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: Pointer to the allocated memory
 *         NULL if allocation fails or if nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}

#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 *
 * @ptr: Pointer to the memory previously allocated with malloc(old_size)
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the new memory block
 *
 * Return: Pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *tmp_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
	{
		new_ptr = malloc(new_size);
		if (!new_ptr)
			return (NULL);
		return (new_ptr);
	}
	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	tmp_ptr = ptr;
	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr[i] = tmp_ptr[i];
	free(ptr);
	return (new_ptr);
}

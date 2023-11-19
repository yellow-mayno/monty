#include <stdlib.h>
/**
* _realloc - reallocate memory
* @ptr: pointer
* @old_size: old size
* @new_size: new size
* Return: a pointer to the new memory location
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	unsigned int i = 0;

	if (ptr == NULL)
	{
		new = malloc(new_size);
		return (new);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size <= old_size)
		return (ptr);
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	for (; i < old_size; i++)
		new[i] = *((char *)ptr + i);
	free(ptr);
	return (new);
}


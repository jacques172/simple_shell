#include "shell.h"

/**
 * _realloc - reallocates memory block
 * @ptr: pointer to the previous memory
 * @old_size: the old size
 * @new_size: the new size
 *
 * Return: a pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *result;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	result = malloc(new_size);
	if (result == NULL)
		return (NULL);
	if (ptr == NULL)
	{
		fill_an_array(result, '\0', new_size);
		free(ptr);
	}
	else
	{
		_memcpy(result, ptr, old_size);
		free(ptr);
	}
	return (result);
}
/**
 * _memset - fills a memory with constant byte
 * @s: pointer to memory area
 * @n: first n bytes
 * @byt: constant byte
 *
 * Return: A pointer to a character
 */
char *_memset(char *s, char byt, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = byt;
	}
	return (s);
}
/**
 * free_data - frees data
 * @data: the data structure
 *
 * Return: (Success) positive number
 * ------- (Fail) negative number
 */
OBOBOBint free_data(sh_t *data)
OBOBOB{
	free(data->line);
OBOBOBOBOBOB	data->line = NULL;
	free(data->args);
OBOBOB	data->args = NULL;
OBOBOB	free(data->cmd);
OBOBOB	data->cmd = NULL;
OBOBOB	free(data->error_msg);
	data->error_msg = NULL;
	return (0);
}
/**
 * _memcpy - cpies memory area
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Amount of memory byte
 *
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
OBOBOB	{
		dest[i] = src[i];
OBOBOB	}
OBOBOBOBOBOBOBOBOBOBOBOB	return (dest);
}

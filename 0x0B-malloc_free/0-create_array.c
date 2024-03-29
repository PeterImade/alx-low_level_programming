#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 * initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to initialize the array with.
 *
 * Return: If size == 0 or the function fails - NULL.
 * Otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *memory;

	if (size == 0)
	{
		return (NULL);
	}

	memory = malloc(sizeof(char) * size);

	if (memory == NULL)
		return (NULL);

	i = 0;

	while (i < size)
	{
		memory[i] = c;
		i++;
	}

	return (memory);
}

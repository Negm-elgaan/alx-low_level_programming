#include "main.h"
#include <stdlib.h>
/**
 * create_array - function to print array with malloc in it
 *
 * @size: parameter to be modified
 *
 * @c: parameter to be modified
 *
 * Return: always 0
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *) malloc(sizeof(c) * size);
	if (ptr == NULL)
		return (0);
	for (i = 0 ; i < size ; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}

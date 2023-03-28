#include "main.h"
/**
 * _strlen - function that counts length of string
 *
 * @s: parameter to be checked
 *
 * Return: value of count
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		count++;
	}
	return (count);
}

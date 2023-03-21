#include "main.h"
/**
* _islower - function to prints lowercase
*
* @c: parameter to be printed
*
* Return: 1 if it is a lowercase
* and 0 otherwise
*
*/

int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}

#include "main.h"
/**
 * _isalpha - function that prints all alaphabet
 *
 * @c: parameter to be printed
 *
 * Return: 1 if it is alphabetic character
 * and 0 otherwise
 *
 */

int _isalpha(int c)
{
	if (c <= 122 && c >= 65)
		return (1);
	else
		return (0);
}

#include "main.h"
/**
 * _isdigit - function to check digits
 *
 * @c: parameter to be checked
 *
 * Return: 1 if digit is 0 through 9
 * and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

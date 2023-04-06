#include "main.h"
/**
 * factorial - function to get factorial of a number
 *
 * @n:paramter to be changed
 *
 * Return: -1 if n less than 0
 * and 1 if n = 0
 * and n * factorial(n-1) if n > 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

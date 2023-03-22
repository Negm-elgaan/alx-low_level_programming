#include "main.h"
/**
 * print_sign - function that prints sign of number
 *
 * @n: parameter to be printed
 *
 * Return: 1 if number greater than 0
 * and -1 if number less than 0
 * and 0 if number equal 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return (0);
	}
}

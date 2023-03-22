#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 *
 * @a: parameter to be checked
 *
 * Return: always a
 */
int print_last_digit(int a)
{
	a = a % 10;
	if (a < 0)
		a = -a;
	return (a);
}

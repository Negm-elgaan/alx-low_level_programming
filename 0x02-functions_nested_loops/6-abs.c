#include "main.h"
/**
* _abs - checks the absolute value
*
* @x: parameter to be checked
*
* Return: always x
*/

int _abs(int x)
{
	if (x < 0)
		x = -(x);
	else
		x = x;
	return (x);
}

#include "function_pointers.h"
/**
* print_name - function that stores pointer function
*
* @name:parameter to be changed
*
* @f:parameter to be changed
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

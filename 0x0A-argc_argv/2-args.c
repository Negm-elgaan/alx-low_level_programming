#include <stdio.h>
#include "main.h"
/**
 * main - function to display all arguments
 *
 * @argc: parameter to be changed
 *
 * @argv: parameter to be changed
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

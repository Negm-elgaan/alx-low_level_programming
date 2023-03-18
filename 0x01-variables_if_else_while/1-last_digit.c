#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
		printf("Last digit of %d is %d and is greater than 5", n, digit);
	else if (digit == 0)
		printf("Last digit of %d is %d and is 0", n, digit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n, digit);
	printf("\n");
	return (0);
}

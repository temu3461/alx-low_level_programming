#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - entry of the code 
  *
  * Return - 0 after code success
  */

/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	/* your code goes there */
	return (0);
}

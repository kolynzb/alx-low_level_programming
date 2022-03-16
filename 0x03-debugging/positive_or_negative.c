#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* positive_or_negative - Evaluating random numbers
* Description: this is a description
* @a: Always 0 (Success)
*/

void positive_or_negative(int a)
{

	int n = a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);

	else if (n == 0)
		printf("%d is zero\n", n);

	else
		printf("%d is negative\n", n);
}

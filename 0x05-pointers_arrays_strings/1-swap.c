#include "main.h"

/**
 *swap_int - this a function decription
 *@a: pointer
 *@b: pointer
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}

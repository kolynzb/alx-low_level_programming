#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strlen - a function that prints an integer.
 * @s: An input integer
 *Description: eturns the length aof str
 * Return: RETURNS THE LEGHT OF A STRING
 */
int _strlen(char *s)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

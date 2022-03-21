#include "main.h"
#include <stdio>
/**
 *_puts - returns length of string
 *
 *Return:nothing
 *
 *@str:input
 *
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

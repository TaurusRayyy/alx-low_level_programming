#include "main.h"
#include <stdio.h>
/**
* print_line - A function that draws a straight line.
* @n: number of times
*
* Return: 0
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

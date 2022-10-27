#include "main.h"
#include <stdio.h>
/**
* print_diagonal - A function that draws a diagonal line.
* @n: number of times.
*
* Return: 0
*/
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

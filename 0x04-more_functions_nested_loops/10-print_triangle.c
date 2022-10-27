#include "main.h"
#include <stdio.h>
/**
* print_triangle - print a triangle of size
* @size: size of triangle
* 
* Return: 0
*/
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{			
			if (b <= (size -a))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}

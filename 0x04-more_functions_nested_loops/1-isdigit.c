#include "main.h"
#include <stdio.h>
/**
* _isdigit - Checks for digit 0 through 9.
* @c: The digit to be checked.
*
* Return: 0 or 1
*/
int _isdigit(int c)
{

	if (c  >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

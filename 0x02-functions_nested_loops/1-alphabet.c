#include "main.h"
/**
* print_alphabet - print alphabet
*
* Return: Always 0
*/
void print_alphabet(void);
{
	char a;

	for(a = 'a'; a <= 'z'; a++)
		_putchar(a);

	_putchar('\n');

	return (0);
}
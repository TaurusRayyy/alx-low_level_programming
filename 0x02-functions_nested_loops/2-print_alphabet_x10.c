#include "main.h"
/**
*print_alphabet_x10 - Make alphabet 10 times
*
*Return: Always 0
*/
void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}

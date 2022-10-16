#include <stdio.h>
/**
* main - Entry
* Return: Always 0
*/
int main(void)
{
	char a;
	int b;
	float c;
	double d;

	printf("Size of char = %d bytes\n", sizeof(a));
	printf("Size of int = %d bytes\n", sizeof(b));
	printf("Size of float = %d bytes\n", sizeof(c));
	printf("Size of double = %d byte\n", sizeof(d));
	return (0);
}

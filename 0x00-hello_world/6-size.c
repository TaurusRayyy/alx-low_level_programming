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

	printf("Size of char = %zu bytes\n", sizeof(a));
	printf("Size of int = %zu bytes\n", sizeof(b));
	printf("Size of float = %zu bytes\n", sizeof(c));
	printf("Size of double = %zu byte\n", sizeof(d));
	return (0);
}

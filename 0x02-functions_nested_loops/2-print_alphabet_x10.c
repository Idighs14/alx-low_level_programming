#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 * in lowercase
 * followed by a new line
 * Return: void
 */
void print_alphabet_x10(void)
{
	char i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}
}

#include "main.h"
/**
 * main - This program prints alphabets in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

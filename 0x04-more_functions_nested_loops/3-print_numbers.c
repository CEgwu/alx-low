#include "main.h"

/**
 * print_numbers - prints numbers that are less than 10 but not less than 0
 * Return: the numbers that should be printed
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x<= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}

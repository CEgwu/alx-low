#include <stdio.h>
#include <unixstd.h>
/**
 * main - This program prints a line to the standard error
 * Return: 1
 */
int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
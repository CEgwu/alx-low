#include <unistd.h>
/**
 * main - This program prints something followed by a new line
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

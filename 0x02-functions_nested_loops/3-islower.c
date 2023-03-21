#include "main.h"
/**
 * main - checks for lowercase
 * Return: 1 for lowercase 0 for other stuff
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}

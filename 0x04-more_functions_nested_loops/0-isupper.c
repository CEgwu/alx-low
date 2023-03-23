#include "main.h"

/**
 * _isupper - checks the code for uppercase
 * Return: 1 for uppercase and 0 for other stuff
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}

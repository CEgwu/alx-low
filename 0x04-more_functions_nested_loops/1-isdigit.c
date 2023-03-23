#include "main.h"

/**
 * _isdigit - looks for characters that are digits
 * Return: 1 for characters that are digits and 0 for other stuff
 */

int _isdigit(int x)
{
	if (x >= 48 && x<= 57)
	{
		return (1);
	}
	return (0);
}

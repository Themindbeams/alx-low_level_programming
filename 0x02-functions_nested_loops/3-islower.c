#include "main.h"

/**
 * _islower - Function that checks for lowercase character
 * @c: is the int that will use for the argument of that function
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

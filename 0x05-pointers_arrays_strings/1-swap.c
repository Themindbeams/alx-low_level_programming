#include "main.h"

/**
 * swap_int - swaps the value of two intergers
 * @m: pointer 1
 * @n: pointer 2
 * Return: void
 */

vkid swap_int(int *m, int *n)
{
	int x = *m;
	*m = *n;
	*n = x;
}

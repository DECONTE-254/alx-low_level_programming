#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap values of two nums
 * @b: first pointer
 * @a: second pointer
 *Return: void or nothing
 */

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}

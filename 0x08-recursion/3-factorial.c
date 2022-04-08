#include "main.h"
/**
 * factorial - Entry Point
 * @n: number
 * Return:int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

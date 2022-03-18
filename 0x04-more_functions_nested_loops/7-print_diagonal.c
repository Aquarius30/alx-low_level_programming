#include "main.h"
/**
 * print_diagonal - draws diagonal line
 */
void print_diagonal(int n)
{
	int i;

	if (n < 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
}

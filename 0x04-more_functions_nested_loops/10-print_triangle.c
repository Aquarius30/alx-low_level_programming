#include "main.h"
/**
 * print_triangle - prints out triangle
 * @size: takes int
 */
void print_triangle(int size)
{
        int i;
        int b;
	int z;
	int p;

        if (size > 0)
        {
		d = size - 1;
		for (i = 0; i < size; i++)
                        {
				for (z = 0; z > 0; z--)
				{
                                	_putchar(32);
                        	}
				for (p = 0; p <= i; p++)
				{
					_putchar(35);
				}
				d--;
				_putchar('\n');
			}
	}
	else
	{
		_putchar('\n');
	}
}

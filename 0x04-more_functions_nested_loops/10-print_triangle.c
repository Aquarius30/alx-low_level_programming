#include "main.h"
/**
 * print_triangle - prints out triangle
 * @size: takes int
 */
void print_triangle(nt size)
{
        int i;
        int b;

        if (size > 0)
        {
                i = 0;
                while (i < size)
                {
                        for (b = 0; b < size; b++)
                        {
                                _putchar(35);
                        }
                        i--;
			_putchar(32);
                        _putchar('\n');
                }
        }
        else
        {
                _putchar('\n');
        }
}

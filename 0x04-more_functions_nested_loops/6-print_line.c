#include "main.h"
/**
 * print_line - prints the distance between two lines
 * @n: number of times _ is printed 
 */
void print_line(int n)
{
	int display_;
	display_ = ( n * "-");

	if (n > 0)
	{
		_putchar(display_);
	}
	else
	{
		_putchar('\n');
	}
}

#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks for digits 0 - 9
 * @c: takes in numbers
 * Return: 0 if not a digit 1 if it is a digit
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

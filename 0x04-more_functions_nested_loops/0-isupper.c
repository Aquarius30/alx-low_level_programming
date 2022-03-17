#include <stdio.h>
#include "main.h"
/**
 * _isupper - checks for uppercase letters
 * Return: 0 if uppercase 1 if lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'B')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

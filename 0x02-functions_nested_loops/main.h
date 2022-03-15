#include <stdio.h>
/**
 * void - no return function
 *
 * Return: 0 after code succession
 */
void print_alphabet(void)
{
char i;
for (i = 97; i <= 122; i++)
{
putchar(i);
}
putchar('\n');
}


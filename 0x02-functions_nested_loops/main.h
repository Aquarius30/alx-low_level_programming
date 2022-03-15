#include <stdio.h>
/**
 * void - print out alphabet 10x
 *
 * Return: 0 after code succession
 */
void print_alphabet_x10(void)
{
int c;
char i;
for (c = 1; c <=10; c++)
{
for (i = 97; i <=122; i++)
putchar(i);
putchar('\n');
}




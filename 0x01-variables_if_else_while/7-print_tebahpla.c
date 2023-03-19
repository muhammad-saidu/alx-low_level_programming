#include <stdio.h>

/**
 * main - a program that prints the lowercase alphabet in reverse
 *
 * Return: Always (Success)
 */

int main(void)
{
int i;

for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}

putchar('\n');

return (0);
}

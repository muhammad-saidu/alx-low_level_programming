#include <stdio.h>
/**
 *  main - a program that prints the alphabet in lowercase, followed by a new
 *
 *  Return: Always (Success)
 *
 */

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
}

putchar('\n');

return (0);
}


#include <stdio.h>
/**
 * main -  a program that prints the alphabet in lowercase, and then in upper.
 *
 *
 * Return: Always (Success)
 */

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}

for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}

putchar('\n');

return (0);
}

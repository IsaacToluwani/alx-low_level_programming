#include <stdio.h>

/**
 * main - Prints some letters of alphabet
 *
 * Return: Always (Success)
 */
int main(void)
{
char C;

for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}

putchar('\n');

return (0);
}

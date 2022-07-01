#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all letters from z to a
 *
 * Return: 0 if successful
 */

int main(void)

{
char var;
for (var = 'z'; var >= 'a'; var--)
{
putchar(var);									}
				putchar('\n');
				return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
char start;
for (i = '0'; i <= '9'; i++)
putchar(i);
for (start = 'a'; start <= 'f'; start++)
putchar(start);
putchar('\n');
return (0);
}

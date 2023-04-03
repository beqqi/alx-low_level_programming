#include <stdlib.h>
#include <stdio.h>
/**
 *main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char lc = 'a';
char up = 'A';
for (lc = 'a'; lc <= 'z' ; lc++)
{
putchar(lc);
}
for (up = 'A'; up <= 'Z'; up++)
{
putchar(up);
}
putchar('\n');
return (0);
}

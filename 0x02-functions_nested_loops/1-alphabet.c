#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *main - Entry point
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char start;
for (start = 'a'; start <= 'z'; start++)
{
_putchar(start);
}
}
int main(void)
{
print_alphabet();
return (0);
}

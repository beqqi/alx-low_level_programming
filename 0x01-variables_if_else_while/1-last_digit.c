#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
int ld = n % 10;
//printf("Last digit of: %d", n);

if (ld > 5){
printf("Last digit of: %d", n, "is",  ld, "%d and is greater than 5");
}
/*else if( n==0){
printf( n , "%d is zero");
}
else{
printf( n , "%d is negative");
}*/
return (0);
}

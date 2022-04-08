#include <stdlib.h>
#include <time.h>
/**
 * main - assigns a random number to it
 * it executes order to print last digit
 * of number stored in variable
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if  (n > 5)
printf("Last digit of  %d is %d greater than 5\n", n);
else if (n == 0)
printf("Last digit of  %d is and is %d\n", n);
else if (0 < n < 6)
printf("Last digit of  %d is and is less than 6 and not 0\n", n);

return (0);
}

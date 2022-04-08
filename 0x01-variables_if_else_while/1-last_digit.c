#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: Print statements based on the last digit of the random n   umber
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int b;

srand(time(0));
n = rand() - RAND_MAX / 2;
b = n % 10;
if  (b > 5)
printf("Last digit of  %i is %i greater than 5\n", n, b);
else if (b == 0)
printf("Last digit of  %i is and is 0\n", n, b);
else if (0 < n < 6)
printf("Last digit of  %i is and is less than 6 and not 0\n", n, b);

return (0);
}

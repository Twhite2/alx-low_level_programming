#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of single digit numbers.
 * Numbers must be separated by commas and a space.
 * You ccan only use `putchar` to print to console
 * You can only use `putchar` up to 4 times
 * `Not allowed to use `char` variable.
 * Return: 0
 */
int main(void)
{
int i = 0;

while (i < 10)
{
putchar(i + '0');

if (i < 9)
{
putchar(44);
putchar(32);
}
i++;
}
putchar('\n');

return (0);
}

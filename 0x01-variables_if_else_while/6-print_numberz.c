#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base 10, starting from 0.
 * Not allowed to use variable of type char.
 * Can only use `putchar` to print console.
 * Can only use `putchar` twice.
 * Return: 0
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
putchar(i + '0');
putchar('\n');

return (0);
}

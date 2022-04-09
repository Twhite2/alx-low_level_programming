#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
char alph = 'a';
for (alph = 'a'; alph <= 'z'; alph++)
putchar(alph);
putchar('\n');

return (0);
}

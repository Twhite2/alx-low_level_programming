#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
char alph = 'a';
char capalph = 'A';

for (alph = 'a'; alph <= 'z'; alph++)
putchar(alph);

putchar('\n');

for (capalph = 'A'; capalph <= 'Z'; capalph++)
putchar(capalph);

return (0);
}

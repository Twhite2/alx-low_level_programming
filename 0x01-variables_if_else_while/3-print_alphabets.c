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


for (capalph = 'A'; capalph <= 'Z'; capalph++)
putchar('\n');
putchar(capalph);

return (0);
}

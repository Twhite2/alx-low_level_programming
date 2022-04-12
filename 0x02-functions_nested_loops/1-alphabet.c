#include "main.h"
/**
 * main - prints alphabets in lowercase
 *
 * check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{

char alph = 'a';
while (alph <= 'z')
{
_putchar(alph);
alph++;
_putchar('\n');
}
return;
}

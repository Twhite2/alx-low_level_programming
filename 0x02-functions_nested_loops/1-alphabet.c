#include "main.h"
/**
 *
 *
 * print_alphabet -  prints alphabet in lowercase
 * check the code
 *
 *
 */
void print_alphabet(void)
{
char alph = 'a';
while (alph <= 'z')
{
_putchar(alph);
alph++;
}
_putchar('\n');
return;
}

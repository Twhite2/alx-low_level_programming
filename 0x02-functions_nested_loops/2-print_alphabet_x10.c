#include "main.h"
/**
 * print_alphabet_x10 - write a function that prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
int i;
char alph = 'a';
while (i <= 10)
{
i = 0;
while (alph <= 'z')
{
_putchar(alph);
alph++;
}
i++;
}
return;
}

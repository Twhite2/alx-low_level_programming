#include "main.h"
/**
 * print_alphabet_x10 - write a function that prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
int i;
char alph = 'a';
while (alph <= 'z')
{
while (i <= 10)
{
i = 0;
_putchar(alph);
i++;
}
alph++;

}
return;
}

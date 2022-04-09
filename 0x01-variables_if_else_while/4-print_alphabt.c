#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print all letters but 'q' and 'e'.
 * Return: 0
 */
int main(void)
{
char alpha = 'a';

while (alpha <= 'z')
{
if (alpha != 'q' && alpha != 'e')
putchar(alpha);
alpha++;
}
putchar('\n');

return (0);
}

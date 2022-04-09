#include <stdio.h>
/**
 * main - main block
 * Description: Print the alphabet in reverse order in lowercase.
 * Return: 0
 */
int main(void)
{
char inalpha;
for (inalpha = 'z'; inalpha >= 'a'; inalpha--)
putchar(inalpha);
putchar('\n');

return (0);
}

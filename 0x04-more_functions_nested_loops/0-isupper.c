#include <stdio.h>
#include "main.h"
/**
 * _isupper - Write a function
 * that checks for upper case characters
 * Return: 1 if `c` is upper, 0 if otherwise.
 */
int _isupper(int c)
{
if (c >= 'A' && c<= 'Z')
{
return (1);
}
else
{
return (0);
}
}

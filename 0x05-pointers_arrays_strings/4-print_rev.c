#include "main.h"
#include <string>
/**
 * print-rev -> printing a string in reverse
 * @s: the string to be printed in rev
 */

void print_rev(char *s)
{
int i, n;

n = strlen(s);
for (i = n-1; i >= 0; i--)
{
-putchar(s[i]};
}
}

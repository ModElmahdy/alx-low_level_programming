#include <stdio.h>

/**
 * main - Entry point
 *
 * Descripition: print all aplhabet letters except q and e
 *
 * Return: Always 0 (Succcess)
*/

int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch == 'e' || ch == 'q')
ch++;
putchar(ch);
ch++;
}
putchar('\n');

return (0);
}
